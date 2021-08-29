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
    meta(content='BackgroundColorArrayAnimation.x3d',name='title'),
    meta(content='Design pattern demonstrating type conversion from single SFColor value (sent from a ColorInterpolator node) to an MFColor array (in a Background node).',name='description'),
    meta(content='Don Brutzman and MV3204 class',name='creator'),
    meta(content='8 September 2009',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='also create a new prototype ColorArrayInterpolator in Chapter 14',name='TODO'),
    meta(content='http://openclipart.org/media/tags/smiley',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter09EventUtilitiesScripting/BackgroundColorArrayAnimation.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BackgroundColorArrayAnimation.x3d'),
    TimeSensor(DEF='Clock',cycleInterval=10,loop=True),
    ColorInterpolator(DEF='ColorChanger',key=[0,0.333333,0.666667,1],keyValue=[(1,0,0),(0,1,0),(0,0,1),(1,0,0)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='ColorChanger'),
    Script(DEF='ColorTypeConversionScript',
      field=[
      field(accessType='inputOnly',name='colorValueInput',type='SFColor'),
      field(accessType='outputOnly',name='colorArrayOutput',type='MFColor')]),
    ROUTE(fromField='value_changed',fromNode='ColorChanger',toField='colorValueInput',toNode='ColorTypeConversionScript'),
    Background(DEF='SingleColorBackground'),
    ROUTE(fromField='colorArrayOutput',fromNode='ColorTypeConversionScript',toField='skyColor',toNode='SingleColorBackground')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BackgroundColorArrayAnimation.py")
