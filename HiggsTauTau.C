
//John Campbell
//a simple graphic which displays the Feynman diagram for the H->tautau decay



void HiggsTauTau()
{
  
   TCanvas *c1 = new TCanvas("c1", "A canvas", 50,100, 1000, 1000);
   c1->Range(-40, -30, 300, 100);
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

   t.DrawLatex(70, 37.5,"#gamma^{*}/Z^{0}/H");



   l = new TLine(110, 30, 130, 10); l->Draw();
   l = new TLine(110, 30, 130, 50); l->Draw();



   t.DrawLatex(135,6,"#tau^{-}");
   t.DrawLatex(135,55,"#tau^{+}");


//Tau^{-} decay line:



// anti tau-neutrino

   l = new TLine(60, -5, 130, 10); l->Draw();



   t.DrawLatex(55,-3,"#bar{#nu}");


//W+ Boson
TCurlyLine *wplus = new TCurlyLine(200, 10, 130, 10);
   wplus->SetWavy();
   wplus->Draw();

t.DrawLatex(170, 16,"W^{+}");




   l = new TLine(200, 10, 250, 10); l->Draw();




   l = new TLine(200, 10, 250, -10); l->Draw();




 



   t.DrawLatex(260,72,"#nu");


//anti-electron



//l = new TLine(200, 10, 250, 30); l->Draw();



   t.DrawLatex(265,10,"e^{+}");




//Tau^{+} decay line:



//tau-neutrino

   l = new TLine(60, 70, 130, 50); l->Draw();



   t.DrawLatex(52,70,"#nu");


//W- Boson
TCurlyLine *wminus = new TCurlyLine(200, 50, 130, 50);
   wminus->SetWavy();
   wminus->Draw();

t.DrawLatex(170, 44,"W^{-}");


   l = new TLine(200, 50, 250, 70); l->Draw();
  
   l = new TLine(200, 50, 250, 50); l->Draw();


   t.DrawLatex(260,-8,"#bar{#nu}");
   t.DrawLatex(265,50,"#mu^{-}");





c1->Update();
   gStyle->SetLineWidth(linsav);
}
