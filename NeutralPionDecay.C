
//John Campbell
//a simple graphic which displays the Feynman diagram for Charged Pion decay




void NeutralPionDecay()
{
  
   TCanvas *c1 = new TCanvas("c1", "A canvas", 10,10, 600, 300);
   c1->Range(0, 0, 140, 60);
   Int_t linsav = gStyle->GetLineWidth();
   gStyle->SetLineWidth(3);
   TLatex t;
   t.SetTextAlign(22);
   t.SetTextSize(0.1);


   
   TCurlyLine *g1 = new TCurlyLine(10, 50, 30, 30);
   g1->SetWavy();
   g1->SetLineColor(5);
   g1->Draw();
    

   TCurlyLine *g2 = new TCurlyLine(110, 30, 130, 50);
   g2->SetWavy();
   g2->SetLineColor(5);
   g2->Draw();



      
   t.DrawLatex(7,6,"u");
   t.DrawLatex(7,55,"#gamma");
  
   l = new TArrow(30, 30, 110, 30,0.05,">"); l->Draw();
   l->SetLineColor(6);
   

   
   TPaveText *pt = new TPaveText(50,20,.95,.8);

   pt->AddText("#sqrt{#frac{1}{2}} \ (u#bar{u} - d#bar{d})");

   pt->Draw();
   
   t.DrawLatex(70, 37.5,"#pi^{0}");

   l = new TArrow(110, 30, 130, 10,0.05,">"); l->Draw();
   l->SetLineColor(6);



   l = new TArrow(10, 10, 30, 30,0.05,">"); l->Draw();
   l->SetLineColor(6);


   t.DrawLatex(135,6,"#bar{u}");

   t.DrawLatex(135,55,"#gamma");
  
   c1->Update();
   gStyle->SetLineWidth(linsav);
}
