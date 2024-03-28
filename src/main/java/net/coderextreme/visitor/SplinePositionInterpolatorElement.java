package net.coderextreme.visitor;
public class SplinePositionInterpolatorElement extends org.web3d.x3d.jsail.Interpolation.SplinePositionInterpolator implements VisitableElement
{
	private org.web3d.x3d.jsail.Interpolation.SplinePositionInterpolator delegate = null;
	public SplinePositionInterpolatorElement(org.web3d.x3d.jsail.Interpolation.SplinePositionInterpolator delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getClosedElement().accept(v);
		getISElement().accept(v);
		getKeyElement().accept(v);
		getKeyValueElement().accept(v);
		getKeyVelocityElement().accept(v);
		getMetadataElement().accept(v);
		getNormalizeVelocityElement().accept(v);
		getValueElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getClosedElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getClosed()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public MFFloatElement getKeyElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getKey()));
}
	public MFVec3fElement getKeyValueElement() { 		 return new MFVec3fElement(new org.web3d.x3d.jsail.fields.MFVec3f(delegate.getKeyValue()));
}
	public MFVec3fElement getKeyVelocityElement() { 		 return new MFVec3fElement(new org.web3d.x3d.jsail.fields.MFVec3f(delegate.getKeyVelocity()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFBoolElement getNormalizeVelocityElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getNormalizeVelocity()));
}
	public SFVec3fElement getValueElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getValue()));
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
