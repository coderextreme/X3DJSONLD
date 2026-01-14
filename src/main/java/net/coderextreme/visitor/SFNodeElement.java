package net.coderextreme.visitor;
public class SFNodeElement extends org.web3d.x3d.jsail.fields.SFNode implements VisitableElement
{
	private org.web3d.x3d.jsail.fields.SFNode delegate = null;
	private org.web3d.x3d.jsail.Core.IS delegateIS = null;
	private org.web3d.x3d.sai.Core.X3DMetadataObject delegateX3DMetadataObject = null;
	public SFNodeElement(org.web3d.x3d.jsail.fields.SFNode delegate) {
		this.delegate = delegate;
	}
	public SFNodeElement(org.web3d.x3d.jsail.Core.IS delegate) {
		this.delegateIS = delegate;
	}
	public SFNodeElement(org.web3d.x3d.sai.Core.X3DMetadataObject delegate) {
		this.delegateX3DMetadataObject = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);

	}
}
