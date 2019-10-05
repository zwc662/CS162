/*
 * Copyright © 2019 University of California, Berkeley
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>
#include "spooler.h"
#include "spooler_shared.h"

/*
 * Function that initializes sp with a buffer of the provided size.
 */
void spool_init_shared(spool_t* sp, size_t size) {}


/*
 * Function that returns if the buffer is empty.
 */
bool spool_empty(spool_t* sp) {
  return false;
}

/*
 * Function that returns if the buffer is full.
 */
bool spool_full(spool_t* sp) {
  return false;
}

/*
 * Function that inserts item into sp. It makes no check that there is
 * room in the buffer because it will be reused in different implementations
 * that will provide this check. This does not require making a deep copy of
 * the item.
 */
void spool_insert_unchecked(spool_t* sp, char* item) {}

/*
 * Function that removes the least recently added item from sp.
 * It makes no check that there is data in the buffer because it
 * will be reused in different implementations that will provide
 * this check.
 */
char* spool_remove_unchecked(spool_t* sp) {
  return NULL;
}

/*
 * Function that returns the buffer allocated for data in sp.
 */
char** reveal_buffer(spool_t* sp) {
  return NULL;
}

