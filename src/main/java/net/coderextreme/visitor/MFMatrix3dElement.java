package net.coderextreme.visitor;
public class MFMatrix3dElement extends org.web3d.x3d.jsail.fields.MFMatrix3d implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFMatrix3d delegate = null;
	public MFMatrix3dElement(org.web3d.x3d.jsail.fields.MFMatrix3d delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
