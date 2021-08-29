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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='RefractiveMaterial.x3d',name='title'),
    meta(content='X3D encodings example: create new node RefractiveMaterial for example PrototypesPlus.',name='description'),
    meta(content='Don Brutzman and Joe Williams',name='creator'),
    meta(content='1 June 2002',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='PrototypesPlus.x3d',name='reference'),
    meta(content='X3D encodings, ISO/IEC 19776-1.3, Part 1: XML encoding, Annex C.7 Prototypes and alternate representations',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/19776-1/V3.3/Part01/examples.html#PrototyesAndAlternateReps',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/X3dSpecifications/RefractiveMaterial.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Protype definition for external use 
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
        Material(DEF='RefractiveMaterialNode',
          IS=IS(
            connect=[
            connect(nodeField='ambientIntensity',protoField='ambientIntensity'),
            connect(nodeField='diffuseColor',protoField='diffuseColor'),
            connect(nodeField='specularColor',protoField='specularColor'),
            connect(nodeField='emissiveColor',protoField='emissiveColor'),
            connect(nodeField='shininess',protoField='shininess'),
            connect(nodeField='transparency',protoField='transparency')])),
        #  after first node in ProtoDeclare, remainder of nodes do not render 
        Script(DEF='RefractionScript',
          field=[
          field(accessType='inputOutput',name='transparencyInitial',type='SFFloat'),
          field(accessType='inputOutput',name='indexOfRefraction',type='SFFloat'),
          field(accessType='outputOnly',name='transparency_changed',type='SFFloat')],
          IS=IS(
            connect=[
            connect(nodeField='transparencyInitial',protoField='transparency'),
            connect(nodeField='indexOfRefraction',protoField='indexOfRefraction')])),
        ROUTE(fromField='transparency_changed',fromNode='RefractionScript',toField='transparency',toNode='RefractiveMaterialNode')]))])
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
