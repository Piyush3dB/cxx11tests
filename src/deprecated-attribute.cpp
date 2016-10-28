// Check if deprecated attribute for declarations is supported
[[deprecated("will be removed in future")]]
void foo() {}

int main() {
    foo();
}
