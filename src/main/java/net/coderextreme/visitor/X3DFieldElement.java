package net.coderextreme.visitor;
public class X3DFieldElement implements org.web3d.x3d.sai.X3DField ,  VisitableElement
{
	private org.web3d.x3d.sai.X3DField delegate = null;
	public X3DFieldElement(org.web3d.x3d.sai.X3DField delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
