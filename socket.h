typedef struct skt socket_t;

bool socket_create(socket_t *skt, struct addrinfo *info);
void socket_destroy(socket_t *skt);
bool socket_bind(socket_t *skt, struct addrinfo *info);
bool socket_listen(socket_t *skt, int tam_cola);
bool socket_accept(socket_t *skt, socket_t *new_skt);
bool socket_conectar(socket_t *skt, struct addrinfo *info);
bool socket_desconectar(socket_t *skt, int sig);
bool socket_send(socket_t *skt, const char *msg, int len);
bool socket_recive(socket_t *skt, char *buffer, int len);
bool socket_close(socket_t *skt);