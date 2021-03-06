%% MPC555 robot controller model parameter list
clear
clc

fundamental_sample_time = 0.01;
%% CAN communication parameters
init_1_message_frequency = 0.01;

init_1_message = uint8(1);
init_2_message = uint8(2);
init_ack_sync_message = uint8(20);
init_ack_async_message = uint8(21);

%% Incremental counter configuration parameters
incntr_max_val = int32(2^24)-1;
incntr_half_val = floor(incntr_max_val/2);
incntr_display_max_val = int32(hex2dec('FFFF'));
incntr_out_value_gain = single(double(incntr_max_val) / double(incntr_display_max_val));
increments_per_turn = int32(115349);
increments_per_half_turn = floor(increments_per_turn / 2);

%% Control parameters
DA_max = uint16(hex2dec('FFFF'));
motor_stopped_value = DA_max / 2;
motor_positive_value_seg_1 = DA_max * 0.52;
motor_negative_value_seg_1 = DA_max * 0.48;

motor_positive_value_seg_2 = DA_max * 0.485;
motor_negative_value_seg_2 = DA_max * 0.515;

trajectory_time = 5; % desired trajectory running time in seconds
ticks_per_trajectory_time = trajectory_time / fundamental_sample_time;


DA_max_saturation = DA_max * 0.7;
DA_min_saturation = DA_max * 0.3;
%% Robot parameters
a1 = single(600); % Segment 1 length
a2 = single(400); % segment 2 length