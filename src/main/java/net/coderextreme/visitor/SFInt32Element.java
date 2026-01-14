package net.coderextreme.visitor;
public class SFInt32Element extends org.web3d.x3d.jsail.fields.SFInt32 implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFInt32 delegate = null;
	public SFInt32Element(org.web3d.x3d.jsail.fields.SFInt32 delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
