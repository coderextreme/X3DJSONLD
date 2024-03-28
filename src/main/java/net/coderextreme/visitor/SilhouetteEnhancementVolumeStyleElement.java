package net.coderextreme.visitor;
public class SilhouetteEnhancementVolumeStyleElement extends org.web3d.x3d.jsail.VolumeRendering.SilhouetteEnhancementVolumeStyle implements VisitableElement
{
	private org.web3d.x3d.jsail.VolumeRendering.SilhouetteEnhancementVolumeStyle delegate = null;
	public SilhouetteEnhancementVolumeStyleElement(org.web3d.x3d.jsail.VolumeRendering.SilhouetteEnhancementVolumeStyle delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getEnabledElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getSilhouetteBoundaryOpacityElement().accept(v);
		getSilhouetteRetainedOpacityElement().accept(v);
		getSilhouetteSharpnessElement().accept(v);
		getSurfaceNormalsElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getSilhouetteBoundaryOpacityElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSilhouetteBoundaryOpacity()));
}
	public SFFloatElement getSilhouetteRetainedOpacityElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSilhouetteRetainedOpacity()));
}
	public SFFloatElement getSilhouetteSharpnessElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSilhouetteSharpness()));
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
