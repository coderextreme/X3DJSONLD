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
    meta(content='RefractiveMaterial.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='24 May 2000',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='VRML 97 specification example: create new node RefractiveMaterial for example D.7',name='description'),
    meta(content='originals/refractivematerial.wrl',name='reference'),
    meta(content='VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.7 Prototypes and alternate representations',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.7',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/RefractiveMaterial.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  external protype definition 
    children=[
    WorldInfo(title='RefractiveMaterial.x3d'),
    ProtoDeclare(name='RefractiveMaterial',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='ambientIntensity',type='SFFloat',value=0),
        field(accessType='inputOutput',name='diffuseColor',type='SFColor',value=(0.5,0.5,0.5)),
        field(accessType='inputOutput',name='specularColor',type='SFColor',value=(0,0,0)),
        field(accessType='inputOutput',name='emissiveColor',type='SFColor',value=(0,0,0)),
        field(accessType='inputOutput',name='shininess',type='SFFloat',value=0),
        field(accessType='inputOutput',name='transparency',type='SFFloat',value=0),
        field(accessType='inputOutput',name='indexOfRefraction',type='SFFloat',value=0.1)]),
      ProtoBody=ProtoBody(
        children=[
        Material(DEF='M',
          IS=IS(
            connect=[
            connect(nodeField='ambientIntensity',protoField='ambientIntensity'),
            connect(nodeField='diffuseColor',protoField='diffuseColor'),
            connect(nodeField='specularColor',protoField='specularColor'),
            connect(nodeField='emissiveColor',protoField='emissiveColor'),
            connect(nodeField='shininess',protoField='shininess'),
            connect(nodeField='transparency',protoField='transparency')]))])),
    #  ==================== 
    Anchor(DEF='TouchTextForExample',description='Touch Text For Example',parameter=["target=_blank"],url=["Example07.x3d","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example07.x3d","Example07.wrl","https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example07.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=ProtoInstance(name='RefractiveMaterial')),
        geometry=Text(string=["RefractiveMaterial is a","configurable Prototype (PROTO) declaration.","","To see an example scene using this new node,","click this text and view Example07"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.65)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RefractiveMaterial.py")
