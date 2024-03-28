package net.coderextreme.visitor;
public class PolylineEmitterElement extends org.web3d.x3d.jsail.ParticleSystems.PolylineEmitter implements VisitableElement
{
	private org.web3d.x3d.jsail.ParticleSystems.PolylineEmitter delegate = null;
	public PolylineEmitterElement(org.web3d.x3d.jsail.ParticleSystems.PolylineEmitter delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCoordElement().accept(v);
		getCoordIndexElement().accept(v);
		getDirectionElement().accept(v);
		getISElement().accept(v);
		getMassElement().accept(v);
		getMetadataElement().accept(v);
		getOnElement().accept(v);
		getSpeedElement().accept(v);
		getSurfaceAreaElement().accept(v);
		getVariationElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFNodeElement getCoordElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getCoord()));
}
	public MFInt32Element getCoordIndexElement() { 		 return new MFInt32Element(new org.web3d.x3d.jsail.fields.MFInt32(delegate.getCoordIndex()));
}
	public SFVec3fElement getDirectionElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getDirection()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFFloatElement getMassElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMass()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFBoolElement getOnElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getOn()));
}
	public SFFloatElement getSpeedElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSpeed()));
}
	public SFFloatElement getSurfaceAreaElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSurfaceArea()));
}
	public SFFloatElement getVariationElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getVariation()));
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
