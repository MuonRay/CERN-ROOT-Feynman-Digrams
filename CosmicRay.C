
//John Campbell
//a simple graphic which displays the Feynman diagram for the H->tautau decay



void CosmicRay()
{
  
   TCanvas *c1 = new TCanvas("c1", "A canvas", 50,100, 1000, 1000);
   c1->Range(-40, -30, 300, 100);
   Int_t linsav = gStyle->GetLineWidth();
   gStyle->SetLineWidth(3);
   TLatex t;
   t.SetTextAlign(22);
   t.SetTextSize(0.1);
   
  
   
   
   l = new TArrow(30, 30, 110, 30,0.02,">"); l->Draw();
   l->SetLineColor(2);


   t.DrawLatex(10, 37.5,"Cosmic Ray");

   
   l = new TArrow(110, 30, 130, 50 ,0.02,"<"); l->Draw();
   l->SetLineColor(6);
   l = new TArrow(110, 30, 130, 30 ,0.02,">"); l->Draw();
   l->SetLineColor(6);
   l = new TArrow(110, 30, 130, 10, 0.02,">"); l->Draw();
   l->SetLineColor(6);

   t.DrawLatex(135,6,"#pi^{-}");
   t.DrawLatex(135,35,"#pi^{0}");
   t.DrawLatex(135,55,"#pi^{+}");






//Pi^{-} decay line:



//W- Boson
TCurlyLine *wplus = new TCurlyLine(200, 10, 130, 10);
   wplus->SetWavy();
   wplus->Draw();

t.DrawLatex(170, 0,"W^{-}");




   l = new TArrow(200, 10, 250, 10,0.02,">"); l->Draw();

   l->SetLineColor(4);
  

   l = new TArrow(200, 10, 250, -10,0.02,"<"); l->Draw();

   


 



   t.DrawLatex(260,72,"#nu");

   t.DrawLatex(265,10,"#mu^{-}");

 



  //Pi^{0} decay line:


//Gamma rays
TCurlyLine *gamma1 = new TCurlyLine(130, 30, 170, 40);
   gamma1->SetWavy();
   gamma1->SetLineColor(5);
   gamma1->Draw();

t.DrawLatex(180, 40,"#gamma");


//Gamma rays
TCurlyLine *gamma2 = new TCurlyLine(130, 30, 170, 20);
   gamma2->SetWavy();
   gamma2->SetLineColor(5);
   gamma2->Draw();

t.DrawLatex(180, 20,"#gamma");









//Pi^{+} decay line:



//W+ Boson
TCurlyLine *wminus = new TCurlyLine(200, 50, 130, 50);
   wminus->SetWavy();
   wminus->Draw();

t.DrawLatex(170, 60,"W^{+}");


   l = new TArrow(200, 50, 250, 70,0.02,">"); l->Draw();
   
   l = new TArrow(200, 50, 250, 50,0.02,"<"); l->Draw();

   l->SetLineColor(4);

   t.DrawLatex(260,-8,"#bar{#nu}");
   t.DrawLatex(265,50,"#mu^{+}");





c1->Update();
   gStyle->SetLineWidth(linsav);
}
