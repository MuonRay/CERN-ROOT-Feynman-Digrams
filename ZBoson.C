
//John Campbell
//a simple graphic which displays the Z-boson Feynman diagram

//For possible Z decay modes, use data file for the momentum of the follwing decays

//Lepton/ EM Decays:


//Z->e+/e- = 45.594 GeV

//Z->μ +/μ - = 45.594 GeV

//Z->τ +/τ - = 45.559 GeV

//Z->γ /γ  = 45.594 GeV

//Z->γ /γ /γ  = 45.594 GeV

//Z->e+/e-/γ  = 45.594 GeV

//Z->μ +/μ -/γ  = 45.594 GeV

//Z->τ +/τ -/γ  = 45.559 GeV

//Z->ν ν /γ γ  = 45.594 GeV

//Z->e+-/μ -+ = 45.594 GeV

//Z->e+-/τ -+ = 45.576 GeV

//Z->μ +-/τ -+ = 45.576 GeV




//Meson Decays:

//Z->π 0/γ  = 45.594 GeV

//Z->η /γ  = 45.592 GeV

//Z->ω /γ  = 45.590 GeV

//Z->η '(958)/γ  = 45.589 GeV

//Z->π +-/W-+ = 10.150 GeV

//Z->ρ +-/W-+ = 10.124 GeV

//Baryon Decays:

//Z->e-/proton = 45.589 GeV

//Z->μ -/proton = 45.589 GeV




void ZBoson()
{
  
   TCanvas *c1 = new TCanvas("c1", "A canvas", 10,10, 600, 300);
   c1->Range(0, 0, 140, 60);
   Int_t linsav = gStyle->GetLineWidth();
   gStyle->SetLineWidth(3);
   TLatex t;
   t.SetTextAlign(22);
   t.SetTextSize(0.1);
   TLine * l;
   l = new TLine(10, 10, 30, 30); l->Draw();
   l = new TLine(10, 50, 30, 30); l->Draw();

   t.DrawLatex(7,6,"e^{-}");
   t.DrawLatex(7,55,"e^{+}");
  
   TCurlyLine *z0 = new TCurlyLine(30, 30, 110, 30);
   z0->SetWavy();
   z0->Draw();

   t.DrawLatex(70, 37.5,"#tau^{*}/Z^{0}/Higgs");



   l = new TLine(110, 30, 130, 10); l->Draw();
   l = new TLine(110, 30, 130, 50); l->Draw();



   t.DrawLatex(135,6,"#tau^{-}");
   t.DrawLatex(135,55,"#tau^{+}");
  
   c1->Update();
   gStyle->SetLineWidth(linsav);
}
