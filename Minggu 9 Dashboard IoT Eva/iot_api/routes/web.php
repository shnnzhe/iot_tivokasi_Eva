<?php

use Illuminate\Support\Facades\Route;
use App\Http\Controllers\GraphController;

// Route halaman utama ke metode index di GraphController
Route::get('/', [GraphController::class, 'index'])->name('graph');

// Route untuk export ke Excel
Route::get('/graph/export', [GraphController::class, 'exportToExcel'])->name('graph.export');
