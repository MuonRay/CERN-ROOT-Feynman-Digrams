
//John Campbell
//a simple graphic which displays the Feynman diagram for muon decay




void MuonDecay()
{
  
   TCanvas *c1 = new TCanvas("c1", "A canvas", 10,10, 600, 300);
   c1->Range(0, 0, 140, 60);
   Int_t linsav = gStyle->GetLineWidth();
   gStyle->SetLineWidth(3);
   TLatex t;
   t.SetTextAlign(22);
   t.SetTextSize(0.1);
   TLine * l;
   l = new TArrow(0, 20, 30, 30, 0.05, "<"); l->Draw();
   l->SetLineColor(4);
   l = new TArrow(60, 55, 30, 30, 0.05, ">"); l->Draw();

   t.DrawLatex(7,15,"#mu^{+}");
   t.DrawLatex(50,55,"#bar{#nu}");
  
   TCurlyLine *z0 = new TCurlyLine(30, 30, 110, 30);
   z0->SetWavy();
   z0->Draw();

   t.DrawLatex(70, 37.5,"W^{+}");



   l = new TArrow(110, 30, 130, 10, 0.05, "<"); l->Draw();
   l->SetLineColor(3);
   l = new TArrow(110, 30, 130, 50, 0.05, ">"); l->Draw();



   t.DrawLatex(135,6,"e^{+}");
   t.DrawLatex(135,55,"#nu");
  
   c1->Update();

   c1->Print("AntiMuonDecay.gif");



   gStyle->SetLineWidth(linsav);
}
