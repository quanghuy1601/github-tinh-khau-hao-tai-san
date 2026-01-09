#pragma once
#include <string>
#include <iostream>
#include <vector>
class Tai_san {
	
	private:
    std::string ma_loai;
    std::string ten_loai;
    int nguyen_gia;
    int nam_khau_hao;
    int thoi_gian_khau_hao;
    int so_thang_da_khau_hao;
    	
	public:
    Tai_san() {}

    Tai_san(const std::string& ma_loai, const std::string& ten_loai, const int& nguyen_gia, const int& nam_khau_hao, const int& thoi_gian_khau_hao) {
        this -> ma_loai = ma_loai;
        this -> ten_loai = ten_loai;
        this -> nguyen_gia = nguyen_gia;
        this -> nam_khau_hao = nam_khau_hao;
        this -> thoi_gian_khau_hao = thoi_gian_khau_hao;
    }
    //getter
    std::string getMa_loai() const {
    	return ma_loai;
	}
	std::string getTen_loai() const {
		return ten_loai;
	}
	int getNguyen_gia() const {
		return nguyen_gia;
	}
	int getNam_khau_hao() const {
	 	return nam_khau_hao;
	}
    int getThoi_gian_khau_hao() const {
		return thoi_gian_khau_hao;	
	}
	//setter
	void setMa_loai(const std::string& ma_loai) {
    	this -> ma_loai = ma_loai;
	}
	void setTen_loai(const std::string& ten_loai) {
		this -> ten_loai = ten_loai;
	}
	void setNguyen_gia(const int& nguyen_gia) {
		this -> nguyen_gia = nguyen_gia;
	}
	void setNam_khau_hao(const int& nam_khau_hao) {
	 	this -> nam_khau_hao = nam_khau_hao;
	}
    void setThoi_gian_khau_hao(const int& thoi_gian_khau_hao) {
		this -> thoi_gian_khau_hao = thoi_gian_khau_hao;	
	}
	int gia_tri_khau_hao_1_thang() {
		return nguyen_gia / thoi_gian_khau_hao;
	}
	int gia_tri_con_lai() {
		return nguyen_gia - gia_tri_khau_hao_1_thang * so_thang_da_khau_hao
	}
	
};
