package net.coderextreme.visitor;
public class X3DArrayFieldElement implements org.web3d.x3d.sai.X3DArrayField ,  VisitableElement
{
	private org.web3d.x3d.sai.X3DArrayField delegate = null;
	public X3DArrayFieldElement(org.web3d.x3d.sai.X3DArrayField delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
