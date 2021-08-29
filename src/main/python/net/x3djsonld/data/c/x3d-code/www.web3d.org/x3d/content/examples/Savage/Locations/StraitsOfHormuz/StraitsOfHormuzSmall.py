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
    component(level=1,name='Geospatial'),
    meta(content='StraitsOfHormuzSmall.x3d',name='title'),
    meta(content='Straits of Hormuz, Persian Gulf',name='description'),
    meta(content='LCDR Mike Milliken',name='creator'),
    meta(content='14 December 2007',name='created'),
    meta(content='22 August 2018',name='modified'),
    meta(content='too many lights! they are very expensive',name='warning'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='https://savage.nps.edu/Savage/Locations/StraitsOfHormuz/StraitsOfHormuzSmall.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      PointLight(location=(10000000000,0,0),radius=100000000000000),
      PointLight(location=(-10000000000,0,0),radius=100000000000000),
      PointLight(location=(0,10000000000,0),radius=100000000000000),
      PointLight(location=(0,-10000000000,0),radius=100000000000000),
      PointLight(location=(0,0,10000000000),radius=100000000000000),
      PointLight(location=(0,0,-10000000000),radius=100000000000000),
      GeoViewpoint(description='Default Viewpoint',orientation=(-1,0,0,1.57),position=(26.3456597347756,56.33160427093061,233309.5324695896),
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=["GD"])),
      Inline(url=["tiles/0/StraitsOfHormuz-Small0-0.x3d","https://savage.nps.edu/Savage/Locations/StraitsOfHormuz/tiles/0/StraitsOfHormuz-Small0-0.x3d","tiles/0/StraitsOfHormuz-Small0-0.wrl","https://savage.nps.edu/Savage/Locations/StraitsOfHormuz/tiles/0/StraitsOfHormuz-Small0-0.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for StraitsOfHormuzSmall.py")
