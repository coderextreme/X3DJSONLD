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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(level=1,name='DIS'),
    meta(content='MultipleGlidersOffMonterey.x3d',name='title'),
    meta(content='Four Gliders operating in Monterey Bay, CA',name='description'),
    meta(content='Jeffrey D. Weekley',name='creator'),
    meta(content='15 February 2007',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='Sea Diver UUV, AUV, AUV Workbench',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/MultipleGlidersOffMonterey.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='BathymetryAndTerrain',
      children=[
      Inline(url=["MontereyBayOpArea.x3d","https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/MontereyBayOpArea.x3d","MontereyBayOpArea.wrl","https://savage.nps.edu/Savage/AuvWorkbench/OperatingAreas/MontereyBayOpArea.wrl"]),
      PointLight(location=(0,1000,0))]),
    Group(DEF='Vehicles',
      children=[
      EspduTransform(address='239.255.5.8',marking='SeaDiver-1',networkMode='networkReader',readInterval=0.25,
        children=[
        Inline(DEF='SeaDiver',url=["../../../Savage/Robots/UnmannedUnderwaterVehicles/SeaDiver.x3d","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/SeaDiver.x3d","../../../Savage/Robots/UnmannedUnderwaterVehicles/SeaDiver.wrl","https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/SeaDiver.wrl"]),
        Viewpoint(description='Sea Diver 1')]),
      EspduTransform(address='239.255.5.8',entityID=1,marking='SeaDiver-2',networkMode='networkReader',readInterval=0.25,
        children=[
        Inline(USE='SeaDiver'),
        Viewpoint(description='Sea Diver 2')]),
      EspduTransform(address='239.255.5.8',entityID=2,marking='SeaDiver-3',networkMode='networkReader',readInterval=0.25,
        children=[
        Inline(USE='SeaDiver'),
        Viewpoint(description='Sea Diver 3')]),
      EspduTransform(address='239.255.5.8',applicationID=3,entityID=3,marking='SeaDiver-4',networkMode='networkReader',readInterval=0.25,
        children=[
        Inline(USE='SeaDiver'),
        Viewpoint(description='Sea Diver 4')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MultipleGlidersOffMonterey.py")
