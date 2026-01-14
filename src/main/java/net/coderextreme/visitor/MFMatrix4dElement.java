package net.coderextreme.visitor;
public class MFMatrix4dElement extends org.web3d.x3d.jsail.fields.MFMatrix4d implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFMatrix4d delegate = null;
	public MFMatrix4dElement(org.web3d.x3d.jsail.fields.MFMatrix4d delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
