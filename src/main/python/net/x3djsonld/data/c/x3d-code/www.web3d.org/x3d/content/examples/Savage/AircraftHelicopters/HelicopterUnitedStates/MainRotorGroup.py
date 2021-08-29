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
    meta(content='MainRotorGroup.x3d',name='title'),
    meta(content='This file defines a main rotor group that is inlined to create a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original mainrotorgroup.wrl created for vrpt demo helicopter)',name='creator'),
    meta(content='8 January 2001',name='created'),
    meta(content='1 August 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/MainRotorGroup.x3d',name='identifier'),
    meta(content='Mms.wrl',name='reference'),
    meta(content='RotorDisk.wrl',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(rotation=(0.0,1.0,0.0,1.57),scale=(0.6,0.6,0.6),translation=(0.0,0.6,0.0),
        children=[
        Inline(url=["Mms.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Mms.x3d","Mms.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/Mms.wrl"])]),
      Transform(
        children=[
        Inline(url=["RotorDisk.x3d","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/RotorDisk.x3d","RotorDisk.wrl","https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/RotorDisk.wrl"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MainRotorGroup.py")
