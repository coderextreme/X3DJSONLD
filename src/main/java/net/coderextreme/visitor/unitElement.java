package net.coderextreme.visitor;
public class unitElement extends org.web3d.x3d.jsail.Core.unit implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.unit delegate = null;
	public unitElement(org.web3d.x3d.jsail.Core.unit delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCategoryElement().accept(v);
		getCssClassElement().accept(v);
		getConversionFactorElement().accept(v);
		getNameElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getCategoryElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCategory()));
}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFDoubleElement getConversionFactorElement() { 		 return new SFDoubleElement(new org.web3d.x3d.jsail.fields.SFDouble(delegate.getConversionFactor()));
}
	public SFStringElement getNameElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getName()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
