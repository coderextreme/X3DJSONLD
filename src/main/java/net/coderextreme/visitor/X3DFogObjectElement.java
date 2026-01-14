package net.coderextreme.visitor;
public class X3DFogObjectElement implements org.web3d.x3d.sai.EnvironmentalEffects.X3DFogObject ,  VisitableElement
{
	private org.web3d.x3d.sai.EnvironmentalEffects.X3DFogObject delegate = null;
	public X3DFogObjectElement(org.web3d.x3d.sai.EnvironmentalEffects.X3DFogObject delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getColorElement().accept(v);
		getFogTypeElement().accept(v);
		getVisibilityRangeElement().accept(v);
	}
	public SFColorElement getColorElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getColor()));
}
	public SFStringElement getFogTypeElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getFogType()));
}
	public SFFloatElement getVisibilityRangeElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getVisibilityRange()));
}
}
