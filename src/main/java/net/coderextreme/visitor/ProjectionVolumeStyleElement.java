package net.coderextreme.visitor;
public class ProjectionVolumeStyleElement extends org.web3d.x3d.jsail.VolumeRendering.ProjectionVolumeStyle implements VisitableElement
{
	private org.web3d.x3d.jsail.VolumeRendering.ProjectionVolumeStyle delegate = null;
	public ProjectionVolumeStyleElement(org.web3d.x3d.jsail.VolumeRendering.ProjectionVolumeStyle delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getEnabledElement().accept(v);
		getIntensityThresholdElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getTypeElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFFloatElement getIntensityThresholdElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getIntensityThreshold()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFStringElement getTypeElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getType()));
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
