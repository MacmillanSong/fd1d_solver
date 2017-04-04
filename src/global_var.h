#pragma once

const double PI=3.141592654;

int n_sol_var=1;
int Nelem=40;
int refine_level=1;
int Nfaces = Nelem+1;
int Ndof = Nelem * n_sol_var ;
int Nghost_l=1, Nghost_r=1; // ghost points at the left and right interfaces
int Netot;

int RK_order=1;
int scheme_order=1;  // scheme order
int *stencil_index=nullptr;
double *FD_coeff=nullptr;

double gtime=0;
double t_init;
double dt=1e-2;
double t_end;
double max_time=1.0;
double CFL;

double x0=0.0;
double dx=1.0;
double xf=1.0;

double a_wave=1.0;
double u_max = 1.0;

double *local_cfl=nullptr;

//double **xd=nullptr;
double *X=nullptr;    // nodal coord
double *h_j=nullptr;  // dx

double *Qinit=nullptr;
double *Qn=nullptr;
double *Qtemp=nullptr;
double *Qex=nullptr;

double *Resid=nullptr;

