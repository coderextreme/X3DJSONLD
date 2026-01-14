package net.coderextreme.visitor;
public class SFImageElement extends org.web3d.x3d.jsail.fields.SFImage implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFImage delegate = null;
	public SFImageElement(org.web3d.x3d.jsail.fields.SFImage delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
