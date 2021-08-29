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
    meta(content='SeaStarPrototype.x3d',name='title'),
    meta(content='Prototype of a simple SeaStar. Zoom in to inspect.',name='description'),
    meta(content='Karl Tenney',name='creator'),
    meta(content='Scott Tufts',name='translator'),
    meta(content='17 December 2001',name='created'),
    meta(content='13 December 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SeaStarPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SeaStarPrototype.x3d'),
    ProtoDeclare(name='SeaStar',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='skinDiffuseColor',type='SFColor',value=(0.8,0.8,0.8)),
        field(accessType='inputOutput',name='skinSpecularColor',type='SFColor',value=(0,0,0)),
        field(accessType='inputOutput',name='skinEmissiveColor',type='SFColor',value=(0,0,0)),
        field(accessType='inputOutput',name='skinShininess',type='SFFloat',value=0.2),
        field(accessType='inputOutput',name='skinTransparency',type='SFFloat',value=0),
        field(accessType='inputOutput',name='skinTextureUrl',type='MFString'),
        field(accessType='inputOutput',name='translation',type='SFVec3f',value=(0.00319815,0.00994461,0.0067411)),
        field(accessType='inputOutput',name='rotation',type='SFRotation',value=(-0.32376,-0.32376,0.889021,1.68816)),
        field(accessType='inputOutput',name='scale',type='SFVec3f',value=(0.659575,0.659575,0.659575))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(DEF='SeaStarLocation',
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='translation'),
            connect(nodeField='rotation',protoField='rotation'),
            connect(nodeField='scale',protoField='scale')]),
          children=[
          Transform(rotation=(1.14191e-007,-1,-5.32201e-006,0.814114),scale=(0.0276058,0.0102856,0.0774523),translation=(-0.0454274,0.0102855,0.0416858),
            children=[
            Shape(DEF='SeaStarLeg',
              appearance=Appearance(
                material=Material(DEF='skinColor',
                  IS=IS(
                    connect=[
                    connect(nodeField='diffuseColor',protoField='skinDiffuseColor'),
                    connect(nodeField='specularColor',protoField='skinSpecularColor'),
                    connect(nodeField='emissiveColor',protoField='skinEmissiveColor'),
                    connect(nodeField='shininess',protoField='skinShininess'),
                    connect(nodeField='transparency',protoField='skinTransparency')])),
                texture=ImageTexture(DEF='skinTexture',
                  IS=IS(
                    connect=[
                    connect(nodeField='url',protoField='skinTextureUrl')]))),
              geometry=Sphere(),)]),
          Transform(rotation=(1.6646e-007,1,6.79179e-007,0.915243),scale=(0.0276058,0.0102856,0.118301),translation=(-0.0731081,0.0102856,-0.047631),
            children=[
            Shape(USE='SeaStarLeg')]),
          Transform(scale=(0.0276058,0.0102856,0.118301),translation=(-1.21519e-009,0.0102856,-0.086997),
            children=[
            Shape(USE='SeaStarLeg')]),
          Transform(rotation=(7.02699e-008,1,-9.67549e-009,4.71239),scale=(0.0276058,0.0102856,0.118301),translation=(0.0943676,0.0102856,-9.2235e-010),
            children=[
            Shape(USE='SeaStarLeg')]),
          Transform(rotation=(-2.28035e-007,1,-1.9708e-007,0.399743),scale=(0.0276058,0.0102856,0.118301),translation=(0.0273156,0.0102856,0.0869062),
            children=[
            Shape(USE='SeaStarLeg')]),
          Transform(rotation=(1.74007e-006,-1,-1.7261e-007,0.240595),scale=(0.0564878,0.00994367,0.0245735),translation=(-0.12392,0.00994368,0.0707975),
            children=[
            Shape(USE='SeaStarLeg')])])])),
    #  ==================== 
    ProtoInstance(name='SeaStar',
      fieldValue=[
      fieldValue(name='rotation',value=(0,1,0,0))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeaStarPrototype.py")
