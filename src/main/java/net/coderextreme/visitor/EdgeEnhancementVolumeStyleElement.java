package net.coderextreme.visitor;
public class EdgeEnhancementVolumeStyleElement extends org.web3d.x3d.jsail.VolumeRendering.EdgeEnhancementVolumeStyle implements VisitableElement
{
	private org.web3d.x3d.jsail.VolumeRendering.EdgeEnhancementVolumeStyle delegate = null;
	public EdgeEnhancementVolumeStyleElement(org.web3d.x3d.jsail.VolumeRendering.EdgeEnhancementVolumeStyle delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getEdgeColorElement().accept(v);
		getEnabledElement().accept(v);
		getGradientThresholdElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getSurfaceNormalsElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFColorRGBAElement getEdgeColorElement() { 		 return new SFColorRGBAElement(new org.web3d.x3d.jsail.fields.SFColorRGBA(delegate.getEdgeColor()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFFloatElement getGradientThresholdElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getGradientThreshold()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFNodeElement getSurfaceNormalsElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getSurfaceNormals()));
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
