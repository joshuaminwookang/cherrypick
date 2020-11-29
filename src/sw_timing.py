
# 2020 Josh Kang
# Script to run benchmark binaries (random, chstone+etc) 
# generate CSV files with results
# use python time.time() to get subsecond precision measurements


import os
import argparse
import subprocess
import csv
import time
from os.path import isfile, join
from shutil import copyfile

#chstone_list =["adpcm", "aes", "blowfish", "dhrystone", "gsm", "matrixmultiply", "motion", "qsort", "sha"]

""" Helper function to get all executable/binaries in a given directory (path) """

def lsBinaries(path, with_dir=True):
    path = os.path.abspath(path)
    files = [f for f in os.listdir(path) if (os.access(join(path,f), os.X_OK) and f != "Makefile") ]
    if with_dir:
      files = [join(path, f) for f in os.listdir(path) if os.access(join(path,f), os.X_OK)]
    return files

""" Helper function: run a progrm num_loop times and report average execution time (in useconds) """

def run_program(pgm, num_loop):
    total  = 0
    for i in range(num_loop):
        begin = time.time()
        subprocess.run([pgm, ">", "/dev/null"], stdout=None, capture_output=False)
        end = time.time()
        total += (end-begin)
    total /= num_loop
    return total*1000*1000 # get usecs


"""
run_benchmark
- run a given benchmark (all of its binaries) and create a CSV file summarizing timing measurements 

@params
- bm_name : name of benchmark ("random" or "chstone")
- num_loop : number of iterations to average each binary execution
"""    
def run_benchmark(bm_name, num_loop):
  fields = ["program", "sw_time"]
  csv_file_name = "sw_perf_{}.csv".format(bm_name)
  csvfile = open(csv_file_name, "a+")
  csvwriter = csv.writer(csvfile)
  csvwriter.writerow(fields)

  if bm_name == "random":
    pgm_dir = "../dataset"
    programs = lsBinaries(pgm_dir)
    programs = []
    for i in range (8979, 18696):
        programs.append(pgm_dir+"/"+str(i))
    
  elif bm_name == "chstone":
    pgm_dir = "../chstone+"
    programs = lsBinaries(pgm_dir+"/binaries/")

  # list of paths for all binaries in this benchmark

  # for each binary, run and measure sw exec time (average for num_loop iterations)
  for pgm in programs:
    newline = [pgm.split("/")[-1] + ".c"]
    try:
        sw_time = run_program(pgm, num_loop)
    except FileNotFoundError:
        print("skipping")
        continue
    newline.append(sw_time)
    csvwriter.writerow(newline)

  csvfile.close()

"""
main
@params: -n number of iterations

runs both random and chstone 
"""
if __name__ == "__main__":
  parser = argparse.ArgumentParser(description='Run Configuration')
  parser.add_argument('-n', '--num_iteration', type=int, help="Number of Iterations to increase precision of timing mearsurement", default=10)

  args = parser.parse_args()
#  run_benchmark("random", args.num_iteration)
  run_benchmark("chstone", args.num_iteration)


