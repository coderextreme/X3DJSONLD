package net.coderextreme.visitor;
public class X3DStatementElement implements org.web3d.x3d.sai.Core.X3DStatement ,  VisitableElement
{
	private org.web3d.x3d.sai.Core.X3DStatement delegate = null;
	public X3DStatementElement(org.web3d.x3d.sai.Core.X3DStatement delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
