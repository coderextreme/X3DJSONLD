package net.coderextreme.visitor;
public class MFInt32Element extends org.web3d.x3d.jsail.fields.MFInt32 implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFInt32 delegate = null;
	public MFInt32Element(org.web3d.x3d.jsail.fields.MFInt32 delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
