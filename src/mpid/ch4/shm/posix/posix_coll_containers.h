#ifndef POSIX_COLL_CONTAINERS_H_INCLUDED
#define POSIX_COLL_CONTAINERS_H_INCLUDED

/* Barrier POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Barrier_intra_dissemination_cnt;

/* Bcast POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Bcast_intra_binomial_cnt;
extern const MPIDI_POSIX_coll_algo_container_t
    MPIDI_POSIX_Bcast_intra_scatter_recursive_doubling_allgather_cnt;
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Bcast_intra_scatter_ring_allgather_cnt;

/* Reduce POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Reduce_intra_binomial_cnt;
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Reduce_intra_reduce_scatter_gather_cnt;

/* Allreduce POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Allreduce_intra_recursive_doubling_cnt;
extern const MPIDI_POSIX_coll_algo_container_t
    MPIDI_POSIX_Allreduce_intra_reduce_scatter_allgather_cnt;

/* Alltoall POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Alltoall_intra_brucks_cnt;
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Alltoall_intra_scattered_cnt;
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Alltoall_intra_pairwise_cnt;
extern const MPIDI_POSIX_coll_algo_container_t
    MPIDI_POSIX_Alltoall_intra_pairwise_sendrecv_replace_cnt;

/* Alltoallv POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Alltoallv_intra_scattered_cnt;
extern const MPIDI_POSIX_coll_algo_container_t
    MPIDI_POSIX_Alltoallv_intra_pairwise_sendrecv_replace_cnt;

/* Alltoallw POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Alltoallw_intra_scattered_cnt;
extern const MPIDI_POSIX_coll_algo_container_t
    MPIDI_POSIX_Alltoallw_intra_pairwise_sendrecv_replace_cnt;

/* Allgather POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Allgather_intra_recursive_doubling_cnt;
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Allgather_intra_brucks_cnt;
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Allgather_intra_ring_cnt;

/* Allgatherv POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Allgatherv_intra_recursive_doubling_cnt;
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Allgatherv_intra_brucks_cnt;
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Allgatherv_intra_ring_cnt;

/* Gather POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Gather_intra_binomial_cnt;

/* Gatherv POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Gatherv_allcomm_linear_cnt;

/* Scatter POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Scatter_intra_binomial_cnt;

/* Scatterv POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Scatterv_allcomm_linear_cnt;

/* Reduce_scatter POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Reduce_scatter_intra_noncommutative_cnt;
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Reduce_scatter_intra_pairwise_cnt;
extern const MPIDI_POSIX_coll_algo_container_t
    MPIDI_POSIX_Reduce_scatter_intra_recursive_doubling_cnt;
extern const MPIDI_POSIX_coll_algo_container_t
    MPIDI_POSIX_Reduce_scatter_intra_recursive_halving_cnt;

/* Reduce_scatter_block POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t
    MPIDI_POSIX_Reduce_scatter_block_intra_noncommutative_cnt;
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Reduce_scatter_block_intra_pairwise_cnt;
extern const MPIDI_POSIX_coll_algo_container_t
    MPIDI_POSIX_Reduce_scatter_block_intra_recursive_doubling_cnt;
extern const MPIDI_POSIX_coll_algo_container_t
    MPIDI_POSIX_Reduce_scatter_block_intra_recursive_halving_cnt;

/* Scan POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Scan_intra_recursive_doubling_cnt;

/* Exscan POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Exscan_intra_recursive_doubling_cnt;

/* Ibcast POSIX containers declaration */
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Ibcast_intra_nbc_binomial_cnt;
extern const MPIDI_POSIX_coll_algo_container_t
    MPIDI_POSIX_Ibcast_intra_nbc_scatter_recursive_doubling_allgather_cnt;
extern const MPIDI_POSIX_coll_algo_container_t
    MPIDI_POSIX_Ibcast_intra_nbc_scatter_ring_allgather_cnt;
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Ibcast_intra_tree_knomial_cnt;
extern const MPIDI_POSIX_coll_algo_container_t MPIDI_POSIX_Ibcast_intra_tree_kary_cnt;

#endif /* POSIX_COLL_CONTAINERS_H_INCLUDED */
