/*
 * Copyright (C) 2017 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

package android.arch.persistence.room.solver.binderprovider

import android.arch.persistence.room.ext.AndroidTypeNames
import android.arch.persistence.room.parser.ParsedQuery
import android.arch.persistence.room.processor.Context
import android.arch.persistence.room.solver.QueryResultBinderProvider
import android.arch.persistence.room.solver.query.result.CursorQueryResultBinder
import android.arch.persistence.room.solver.query.result.QueryResultBinder
import com.squareup.javapoet.TypeName
import javax.lang.model.type.DeclaredType

class CursorQueryResultBinderProvider(val context: Context) : QueryResultBinderProvider {
    override fun provide(declared: DeclaredType, query: ParsedQuery): QueryResultBinder {
        return CursorQueryResultBinder()
    }

    override fun matches(declared: DeclaredType): Boolean =
        declared.typeArguments.size == 0 && TypeName.get(declared) == AndroidTypeNames.CURSOR
}