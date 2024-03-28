package net.coderextreme.visitor;
public class ISElement extends org.web3d.x3d.jsail.Core.IS implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.IS delegate = null;
	public ISElement(org.web3d.x3d.jsail.Core.IS delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCssClassElement().accept(v);
		getConnectElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public MFNodeElement getConnectElement() { 		 return new MFNodeElement<org.web3d.x3d.jsail.Core.connect>(new org.web3d.x3d.jsail.fields.MFNode((java.util.ArrayList<org.web3d.x3d.jsail.Core.connect>)delegate.getConnectList()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
