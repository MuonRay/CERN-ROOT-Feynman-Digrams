

//JC-a simple graphic which displays the Feynman diagram for Pair Annihilation
//open in CERN ROOT.

/*



An electron and a positron collide and form a bound state, known as positronium. 

Positronium is a pseudo-atom, with a positron and electron orbiting around a common "virutal nucleus".

This bound state decays by an EM decay in 10^-7 seconds after formation. 
2 gamma rays are released with opposite but equal momentum.


Interaction in 4-Vector notation:
     
     For an electron with a rest mass E1, and a positron with a rest mass E2:
     
     (E1+E2,0,0,0) =>
     (E1,P1,0,0) +
     (E2,-P2,0,0)
     
     P1=P2
     
     
     
     
     */
     




void PairAnnihilation()
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
    


   TCurlyLine *g2 = new TCurlyLine(110, 30, 130, 10);
   g2->SetWavy();
   g2->SetLineColor(5);
   g2->Draw();


    t.DrawLatex(7,6,"e^{-}");
   
   t.DrawLatex(7,55,"#gamma");
  
   TLine *z0 = new TLine(30, 30, 110, 30);
   
   z0->Draw();

   //t.DrawLatex(70, 37.5,"e^{+} + e^{-}");

   TArc *a = new TArc(70, 30, 15);
   a->Draw();
   t.DrawLatex(55, 45,"e^{-}");
   t.DrawLatex(85, 15,"e^{+}");

   TPaveText *pt = new TPaveText(50,10,.95,.8);

   pt->AddText("Positronium Bound State(Lifetime ~ 10^-7 s)");

   pt->Draw();
   
   TPaveText *Title = new TPaveText(50,10,.95,.8);

   Title->AddText("Pair Annihilation");

   Title->AddText("For an electron with a rest mass E1, and a positron with a rest mass E2:");
   
   Title->AddText("(E1+E2,0,0,0) => (E1,P1,0,0) + (E2,-P2,0,0) ; P1=P2");
    
   Title->AddText("Gamma Rays have equal energy and opposite momentum vectors and are emitted back-to-back");
    
        Title->Draw();

 

   l = new TArrow(110, 30, 130, 50,0.05,"<"); l->Draw();
   l->SetLineColor(2);



   l = new TArrow(10, 10, 30, 30,0.05,">"); l->Draw();
   l->SetLineColor(4);


   t.DrawLatex(135,6,"#gamma");

   t.DrawLatex(135,55,"e^{+}");
  






   

      c1->Update();

   c1->Print("PairAnnihilation.gif");



   gStyle->SetLineWidth(linsav);
}
