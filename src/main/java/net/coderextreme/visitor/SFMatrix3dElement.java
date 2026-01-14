package net.coderextreme.visitor;
public class SFMatrix3dElement extends org.web3d.x3d.jsail.fields.SFMatrix3d implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFMatrix3d delegate = null;
	public SFMatrix3dElement(org.web3d.x3d.jsail.fields.SFMatrix3d delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
