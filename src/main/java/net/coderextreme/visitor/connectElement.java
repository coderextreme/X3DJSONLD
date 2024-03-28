package net.coderextreme.visitor;
public class connectElement extends org.web3d.x3d.jsail.Core.connect implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.connect delegate = null;
	public connectElement(org.web3d.x3d.jsail.Core.connect delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCssClassElement().accept(v);
		getNodeFieldElement().accept(v);
		getProtoFieldElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getNodeFieldElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getNodeField()));
}
	public SFStringElement getProtoFieldElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getProtoField()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
