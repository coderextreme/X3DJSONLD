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

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    component(level=1,name='DIS'),
    component(level=1,name='Geospatial'),
    component(level=1,name='HAnim'),
    component(level=3,name='NURBS'),
    unit(category='angle',conversionFactor=0.0174532925167,name='DEGREES'),
    unit(category='length',conversionFactor=0.3048,name='FEET'),
    unit(category='force',conversionFactor=4.4482,name='POUNDS-FORCE'),
    unit(category='mass',conversionFactor=0.45359237,name='POUNDS'),
    meta(content='HeaderProfileComponentUnitMetaExample.x3d',name='title'),
    meta(content='Simple scene demonstrating X3D header, profile, component unit and meta definitions. The component tags raise the support level from Immersive profile to include other components included in the X3D 3.0 Full profile. Common unit conversion factors change from X3D defaults in radians, meters, Newtons and kilograms.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='11 October 2005',name='created'),
    meta(content='3 May 2020',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#unit',name='reference'),
    meta(content='Separate example newScene.x3d presents other example meta tags for potential use, authors can delete unused name-value pairs.',name='reference'),
    meta(content='newScene.x3d',name='reference'),
    meta(content='../Chapter15Metadata/MetadataExamples.x3d',name='reference'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter01TechnicalOverview/HeaderProfileComponentUnitMetaExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(DEF='ModelTitle',title='HeaderProfileComponentMetaExample.x3d'),
    WorldInfo(USE='ModelTitle'),
    Background(groundColor=[(0.2,0.4,0.6)],skyColor=[(0.2,0.4,0.6)]),
    Shape(
      geometry=Text(string=["HeaderProfileComponentMetaExample.x3d","shows example use of","header, profile, component and meta tags"],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.6)),
      appearance=Appearance(
        material=Material(diffuseColor=(0.6,0.8,1))))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HeaderProfileComponentUnitMetaExample.py")
