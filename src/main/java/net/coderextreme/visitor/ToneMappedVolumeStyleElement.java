package net.coderextreme.visitor;
public class ToneMappedVolumeStyleElement extends org.web3d.x3d.jsail.VolumeRendering.ToneMappedVolumeStyle implements VisitableElement
{
	private org.web3d.x3d.jsail.VolumeRendering.ToneMappedVolumeStyle delegate = null;
	public ToneMappedVolumeStyleElement(org.web3d.x3d.jsail.VolumeRendering.ToneMappedVolumeStyle delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCoolColorElement().accept(v);
		getEnabledElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getSurfaceNormalsElement().accept(v);
		getWarmColorElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFColorRGBAElement getCoolColorElement() { 		 return new SFColorRGBAElement(new org.web3d.x3d.jsail.fields.SFColorRGBA(delegate.getCoolColor()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFNodeElement getSurfaceNormalsElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getSurfaceNormals()));
}
	public SFColorRGBAElement getWarmColorElement() { 		 return new SFColorRGBAElement(new org.web3d.x3d.jsail.fields.SFColorRGBA(delegate.getWarmColor()));
}
	public SFStringElement getDEFElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDEF()));
}
	public SFStringElement getUSEElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getUSE()));
}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
