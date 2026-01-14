package net.coderextreme.visitor;
public class ProtoBodyElement extends org.web3d.x3d.jsail.Core.ProtoBody implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.ProtoBody delegate = null;
	public ProtoBodyElement(org.web3d.x3d.jsail.Core.ProtoBody delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getChildrenElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public MFNodeElement getChildrenElement() { 		 return new MFNodeElement(delegate.getChildren());
}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
