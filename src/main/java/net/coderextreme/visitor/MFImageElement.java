package net.coderextreme.visitor;
public class MFImageElement extends org.web3d.x3d.jsail.fields.MFImage implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.MFImage delegate = null;
	public MFImageElement(org.web3d.x3d.jsail.fields.MFImage delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
