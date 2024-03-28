package net.coderextreme.visitor;
public class FogElement extends org.web3d.x3d.jsail.EnvironmentalEffects.Fog implements VisitableElement
{
	private org.web3d.x3d.jsail.EnvironmentalEffects.Fog delegate = null;
	public FogElement(org.web3d.x3d.jsail.EnvironmentalEffects.Fog delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBindTimeElement().accept(v);
		getColorElement().accept(v);
		getFogTypeElement().accept(v);
		getISElement().accept(v);
		getIsBoundElement().accept(v);
		getMetadataElement().accept(v);
		getVisibilityRangeElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFTimeElement getBindTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getBindTime()));
}
	public SFColorElement getColorElement() { 		 return new SFColorElement(new org.web3d.x3d.jsail.fields.SFColor(delegate.getColor()));
}
	public SFStringElement getFogTypeElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getFogType()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsBoundElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsBound()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getVisibilityRangeElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getVisibilityRange()));
}
	public SFStringElement getDEFElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDEF()));
}
	public SFStringElement getUSEElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getUSE()));
}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
