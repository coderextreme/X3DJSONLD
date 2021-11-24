###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='Example07.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='26 June 2000',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D working group',name='creator'),
    meta(content='originals/exampleD_7.wrl',name='reference'),
    meta(content='VRML 97 specification example: Prototypes and alternate representations',name='description'),
    meta(content='VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.7 Prototypes and alternate representations',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.7',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example07.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  external protype definition (capitalization error in 3rd URL of original example) 
    children=[
    WorldInfo(title='Example07.x3d'),
    ExternProtoDeclare(name='RefractiveMaterial',url=["urn:inet:foo.com:types:RefractiveMaterial#RefractiveMaterial","RefractiveMaterial.x3d#RefractiveMaterial","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/RefractiveMaterial.x3d#RefractiveMaterial","RefractiveMaterial.wrl#RefractiveMaterial","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/RefractiveMaterial.wrl#RefractiveMaterial"],
      #  field tags are declarations of what interfaces are in this Proto node 
      field=[
      field(accessType='inputOutput',name='ambientIntensity',type='SFFloat'),
      field(accessType='inputOutput',name='diffuseColor',type='SFColor'),
      field(accessType='inputOutput',name='specularColor',type='SFColor'),
      field(accessType='inputOutput',name='emissiveColor',type='SFColor'),
      field(accessType='inputOutput',name='shininess',type='SFFloat'),
      field(accessType='inputOutput',name='transparency',type='SFFloat'),
      field(accessType='inputOutput',name='indexOfRefraction',type='SFFloat')]),
    Shape(
      geometry=Sphere(),
      appearance=Appearance(
        material=ProtoInstance(name='RefractiveMaterial',
          fieldValue=[
          fieldValue(name='ambientIntensity',value=0.2),
          fieldValue(name='diffuseColor',value=(1,0,0)),
          fieldValue(name='indexOfRefraction',value=0.3)])))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Example07.py")
