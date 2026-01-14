package net.coderextreme.visitor;
public class ROUTEElement extends org.web3d.x3d.jsail.Core.ROUTE implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.ROUTE delegate = null;
	public ROUTEElement(org.web3d.x3d.jsail.Core.ROUTE delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCssClassElement().accept(v);
		getFromFieldElement().accept(v);
		getFromNodeElement().accept(v);
		getCssStyleElement().accept(v);
		getToFieldElement().accept(v);
		getToNodeElement().accept(v);
	}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getFromFieldElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getFromField()));
}
	public SFStringElement getFromNodeElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getFromNode()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
	public SFStringElement getToFieldElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getToField()));
}
	public SFStringElement getToNodeElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getToNode()));
}
}
