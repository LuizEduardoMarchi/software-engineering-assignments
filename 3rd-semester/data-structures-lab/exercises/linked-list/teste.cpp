int main(void)
{
    lista *ponteiro;
    free(ponteiro);

    ponteiro = aloca();

    ponteiro->informacao = 200;

    lista *ptr = aloca();

    ponteiro->proximo = ptr;

    cout << ponteiro << endl;
    cout << ponteiro->informacao << endl;
    cout << ponteiro->proximo << endl;
    cout << "o proximo: " << ptr << endl;
    cout << "valor do dado de ptr:" << ptr->informacao << endl; 
    cout << "proximo de ptr:" << ptr->proximo << endl;

    free(ponteiro);
    free(ptr);

    return 0;
}