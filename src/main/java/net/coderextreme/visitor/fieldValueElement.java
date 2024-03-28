package net.coderextreme.visitor;
public class fieldValueElement extends org.web3d.x3d.jsail.Core.fieldValue implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.fieldValue delegate = null;
	public fieldValueElement(org.web3d.x3d.jsail.Core.fieldValue delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getChildrenElement().accept(v);
		getCssClassElement().accept(v);
		getNameElement().accept(v);
		getCssStyleElement().accept(v);
		getValueElement().accept(v);
	}
	public MFNodeElement getChildrenElement() { 		 return new MFNodeElement(delegate.getChildren());
}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getNameElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getName()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
	public SFStringElement getValueElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getValue()));
}
}
