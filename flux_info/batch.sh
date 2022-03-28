
# single bin NCpi0 Enu
#root -l -b -q 'calculate_num.C(0., 5.00, 1000, 6.3e20)' 
#root -l -b -q 'calculate_num.C(0.275, 8.00, 1000, 5.327e19)' 

# single bin NCpi0 Ppi0
root -l -b -q 'calculate_num.C(0.275, 8.00, 1000, 5.327e19, 0., 4.)' 





# single bin NC pi0 momentum
#root -l -b -q 'calculate_num.C(0.275, 4.00, 1000, 5.327e19, 0, 2.)' 

# NOTE: if bins are in term of Enu do not use init_difval and final_difval
# NOTE: if bins are not in term of Enu (other variables) need to calculate all flux (like from 0 to 5 GeV) and later weigh it for the width of the bin in the other variable, hence use init_difval and final_difval

# numu Enu
# root -l -b -q 'calculate_num.C(0.20, 2.00, 1000, 5.327e19)' 
# root -l -b -q 'calculate_num.C(2.00, 4.00, 1000, 5.327e19)' 

# numu Enu
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.2, 0.54)' 
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.54, 0.705)' 
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.705, 0.805)' 
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.805, 0.920)' 
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.920, 1.05)' 
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 1.05, 1.2)' 
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 1.2, 1.375)' 
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 1.375, 1.57)' 
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 1.57, 2.05)' 
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 2.05, 4.0)'

# muon Emuon
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.106, 0.226)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.226, 0.296)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.296, 0.386)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.386, 0.505)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.505, 0.577)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.577, 0.659)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.659, 0.753)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.753, 0.861)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.861, 0.984)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.984, 1.285)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 1.285, 2.506)'

# hadronic Ehad
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.03, 0.1)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.1, 0.15)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.15, 0.225)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.225, 0.275)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.275, 0.336)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.336, 0.411)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.411, 0.502)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.502, 0.614)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.614, 0.75)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 0.75, 1.12)'
# root -l -b -q 'calculate_num.C(0, 5, 1000, 5.327e19, 1.12, 2.5)'