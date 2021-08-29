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

newModel=X3D(profile='Interchange',version='3.1',
  head=head(
    children=[
    meta(content='OilTanker.x3d',name='title'),
    meta(content='An Oil Tanker',name='description'),
    meta(content='Andrew Wiest',name='creator'),
    meta(content='LT Patrick Sullivan',name='translator'),
    meta(content='6 May 2001',name='created'),
    meta(content='30 January 2006',name='translated'),
    meta(content='21 February 2016',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsCivilian/CargoShips/OilTanker.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='VizX3D, http://www.vivaty.com/downloads/studio',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Oil Tanker',
      metadata=MetadataSet(name='SMAL',reference='https://savage.nps.edu/Savage/Tools/SMAL/SMAL.html',
        value=[
        MetadataString(name='version',value=["1.0"],
          metadata=MetadataString(name='appinfo',value=["This is the version of SMAL employed, not of the model."])),
        MetadataSet(name='EntityDefinition',
          #  Identifying metadata for the current simulation of interest 
          value=[
          MetadataSet(name='Classification',
            value=[
            MetadataString(name='level',value=["UNCLASSIFIED"],
              metadata=MetadataString(name='appinfo',value=["UNCLASSIFIED","FOUO","CONFIDENTIAL","SECRET"])),
            MetadataString(name='reference',value=["none"],
              metadata=MetadataString(name='appinfo',value=["The published source of classified information, if any, contained in the Metadata."])),
            MetadataString(name='rationale',
              metadata=MetadataString(name='appinfo',value=["Values are estimations and not from any source"]))]),
          MetadataSet(name='IdentificationParameters',
            value=[
            MetadataString(name='name',value=["Oil Tanker"],
              metadata=MetadataString(name='appinfo',value=["The plain language name of the vehicle this model represents, i.e. the base class (DDG-51), or vehicle designation (M1A2)."]))]),
          MetadataSet(name='X3DArchiveModel',
            metadata=MetadataString(name='appinfo',value=["https://savage.nps.edu/Savage/ShipsCivilian/CargoShips/OilTanker.x3d"])),
          MetadataSet(name='PhysicalParameters',
            value=[
            MetadataSet(name='PhysicalConstraints',
              value=[
              MetadataFloat(name='height',value=[50],
                metadata=MetadataString(name='appinfo',value=["The maximum structural height of the object in meters. This may be used for clearance checking or other calculations."])),
              MetadataFloat(name='width',value=[28],
                metadata=MetadataString(name='appinfo',value=["The maximum width, beam, or wingspan of the vehicle in meters. This may be used for clearance checking or other calculations."])),
              MetadataFloat(name='length',value=[138.6],
                metadata=MetadataString(name='appinfo',value=["The maximum structural length of the object in meters. This may be used for clearance checking or other calculations."])),
              MetadataFloat(name='draft',value=[12],
                metadata=MetadataString(name='appinfo',value=["The vertical distance in meters from the deepest point (keel or other structure) to the waterline of a vehicle at its stated displacement or gross weight."]))]),
            MetadataSet(name='DynamicResponseConstraints',
              value=[
              MetadataFloat(name='maximumSpeed',value=[28],
                metadata=MetadataString(name='appinfo',value=["The maximum rated speed for this vehicle in kph."])),
              MetadataFloat(name='cruiseSpeed',value=[20],
                metadata=MetadataString(name='appinfo',value=["The published cruise speed for this vehicle in kph."]))]),
            MetadataSet(name='TacticalConstraints',
              #  none defined 
              )]),
          MetadataSet(name='NetworkedCommunicationParameterSet',
            value=[
            MetadataSet(name='DisConfiguration',
              value=[
              MetadataInteger(name='entityKind',value=[1],
                metadata=MetadataString(name='appinfo',value=["The DIS enumeration for the overall type of this object (for vehicles this value should be 1)."])),
              MetadataInteger(name='entityDomain',value=[3],
                metadata=MetadataString(name='appinfo',value=["The DIS enumeration for the domain of operations of this object (air, surface, sub-surface, etc.)."])),
              MetadataInteger(name='entityCountry',value=[225],
                metadata=MetadataString(name='appinfo',value=["The DIS enumeration for the country of origin of this object (the value for United States is 225)."])),
              MetadataInteger(name='entityCategory',value=[61],
                metadata=MetadataString(name='appinfo',value=["The DIS enumeration for the type of this vehicle (cruiser or destroyer, tank or truck, bomber or fighter, etc.)."])),
              MetadataInteger(name='entitySubCategory',value=[1],
                metadata=MetadataString(name='appinfo',value=["The DIS enumeration for the class designation of this vehicle (CG-47 Ticonderoga, DDG-51 Arleigh Burke, M1A2, M880, B-52, F-22, etc."]))])])])])),
    Background(DEF='Background1',skyColor=[(.70196,.8,.94902)]),
    Group(DEF='OilTanker',
      children=[
      Transform(DEF='dad_ShipSUpertankerMasterNode',
        children=[
        Group(DEF='ShipSUpertankerMasterNode',
          children=[
          Transform(DEF='dad_HE4',rotation=(0,-1,0,1.571),scale=(.835,.999,.98),translation=(133,-.1,0),
            children=[
            Shape(DEF='HE4',
              appearance=Appearance(
                material=Material(DEF='material2_mat',diffuseColor=(.8,.3,.2),shininess=0.100,specularColor=(.3,.1,.05))),
              geometry=IndexedFaceSet(coordIndex=[0,1,11,-1,0,11,10,-1,1,2,12,-1,1,12,11,-1,2,3,13,-1,2,13,12,-1,3,4,14,-1,3,14,13,-1,4,5,15,-1,4,15,14,-1,5,6,16,-1,5,16,15,-1,6,7,17,-1,6,17,16,-1,7,8,18,-1,7,18,17,-1,8,9,19,-1,8,19,18,-1,10,11,21,-1,10,21,20,-1,11,12,22,-1,11,22,21,-1,12,13,23,-1,12,23,22,-1,13,14,24,-1,13,24,23,-1,14,15,25,-1,14,25,24,-1,15,16,26,-1,15,26,25,-1,16,17,27,-1,16,27,26,-1,17,18,28,-1,17,28,27,-1,18,19,29,-1,18,29,28,-1,20,21,31,-1,20,31,30,-1,21,22,32,-1,21,32,31,-1,22,23,33,-1,22,33,32,-1,23,24,34,-1,23,34,33,-1,24,25,35,-1,24,35,34,-1,25,26,36,-1,25,36,35,-1,26,27,37,-1,26,37,36,-1,27,28,38,-1,27,38,37,-1,28,29,39,-1,28,39,38,-1,30,31,41,-1,30,41,40,-1,31,32,42,-1,31,42,41,-1,32,33,43,-1,32,43,42,-1,33,34,44,-1,33,44,43,-1,34,35,45,-1,34,45,44,-1,35,36,46,-1,35,46,45,-1,36,37,47,-1,36,47,46,-1,37,38,48,-1,37,48,47,-1,38,39,49,-1,38,49,48,-1,8,7,6,-1,8,6,5,-1,8,5,4,-1,8,4,3,-1,8,3,2,-1,8,2,1,-1,8,1,0,-1],creaseAngle=1.300,
                coord=Coordinate(point=[(0,-19.66,-33.92),(-4.88,-19.66,-32.48),(-13.6,-19.66,-29.04),(-19.44,-19.66,-24.24),(-19.44,-19.66,32.32),(19.44,-19.66,32.32),(19.44,-19.66,-24.24),(13.6,-19.66,-29.04),(4.88,-19.66,-32.48),(0,-19.66,-33.92),(0,-15,-40.28),(-5.795,-15,-38.57),(-16.15,-15,-34.485),(-23.085,-15,-28.785),(-23.085,-15,38.38),(23.085,-15,38.38),(23.085,-15,-28.785),(16.15,-15,-34.485),(5.795,-15,-38.57),(0,-15,-40.28),(0,-10,-42.4),(-6.1,-10,-40.6),(-17,-10,-36.3),(-24.3,-10,-30.3),(-24.3,-10,40.4),(24.3,-10,40.4),(24.3,-10,-30.3),(17,-10,-36.3),(6.1,-10,-40.6),(0,-10,-42.4),(0,-5,-40.28),(-5.795,-5,-38.57),(-16.15,-5,-34.485),(-23.085,-5,-28.785),(-23.085,-5,38.38),(23.085,-5,38.38),(23.085,-5,-28.785),(16.15,-5,-34.485),(5.795,-5,-38.57),(0,-5,-40.28),(0,6,-33.92),(-4.27,6,-32.48),(-11.9,6,-29.04),(-17.01,6,-24.24),(-17.01,6,32.32),(17.01,6,32.32),(17.01,6,-24.24),(11.9,6,-29.04),(4.27,6,-32.48),(0,6,-33.92)])))]),
          Transform(DEF='dad_HE3',translation=(157.6,9.1,0),
            children=[
            Shape(DEF='HE3',
              appearance=Appearance(
                material=Material(DEF='GreyBlack_mat',diffuseColor=(.3,.3,.3),shininess=0.100,specularColor=(.1,.1,.1))),
              geometry=IndexedFaceSet(coordIndex=[0,1,12,-1,0,12,11,-1,1,2,13,-1,1,13,12,-1,2,3,14,-1,2,14,13,-1,3,4,15,-1,3,15,14,-1,4,5,16,-1,4,16,15,-1,5,6,17,-1,5,17,16,-1,6,7,18,-1,6,18,17,-1,7,8,19,-1,7,19,18,-1,8,9,20,-1,8,20,19,-1,9,10,21,-1,9,21,20,-1],creaseAngle=0.785,solid=False,
                coord=Coordinate(point=[(-13.93,-.03094,24.3),(-9.53,-.08434,24.3),(-.33,-.196,21.2),(5.87,-.27124,15.2),(12.07,-.34648,9.1),(15.17,-.38411,0),(12.07,-.34648,-9.1),(5.87,-.27124,-15.2),(-.33,-.196,-21.2),(-9.53,-.08434,-24.3),(-13.93,-.03094,-24.3),(-8.93,4.16906,24.3),(-4.53,4.11566,24.3),(4.67,4.004,21.2),(10.87,3.92876,15.2),(17.07,3.85352,9.1),(20.17,3.81589,0),(17.07,3.85352,-9.1),(10.87,3.92876,-15.2),(4.67,4.004,-21.2),(-4.53,4.11566,-24.3),(-8.93,4.16906,-24.3)])))]),
          Transform(DEF='dad_MainHull',
            children=[
            Group(DEF='MainHull',
              children=[
              Transform(DEF='dad_HE1',
                children=[
                Shape(DEF='HE1',
                  appearance=Appearance(
                    material=Material(USE='GreyBlack_mat')),
                  geometry=IndexedFaceSet(coordIndex=[0,1,20,-1,0,20,19,-1,1,2,21,-1,1,21,20,-1,2,3,22,-1,2,22,21,-1,3,4,23,-1,3,23,22,-1,4,5,24,-1,4,24,23,-1,5,6,25,-1,5,25,24,-1,6,7,26,-1,6,26,25,-1,7,8,27,-1,7,27,26,-1,8,9,28,-1,8,28,27,-1,9,10,29,-1,9,29,28,-1,10,11,30,-1,10,30,29,-1,11,12,31,-1,11,31,30,-1,12,13,32,-1,12,32,31,-1,13,14,33,-1,13,33,32,-1,14,15,34,-1,14,34,33,-1,15,16,35,-1,15,35,34,-1,16,17,36,-1,16,36,35,-1,17,18,37,-1,17,37,36,-1,17,16,15,-1,17,15,14,-1,17,14,13,-1,17,13,12,-1,17,12,11,-1,17,11,10,-1,17,10,9,-1,17,9,8,-1,17,8,7,-1,17,7,6,-1,17,6,5,-1,17,5,4,-1,17,4,3,-1,17,3,2,-1,17,2,1,-1,17,1,0,-1],creaseAngle=0.785,solid=False,
                    coord=Coordinate(point=[(169.8,0,0),(166.8,0,-9.1),(160.7,0,-15.2),(154.6,0,-21.2),(145.6,0,-24.3),(-103.1,0,-24.3),(-112.2,0,-21.3),(-118.3,0,-15.2),(-122.5,0,-9.3),(-124.3,0,0),(-122.5,0,9.3),(-118.3,0,15.2),(-112.2,0,21.3),(-103.1,0,24.3),(145.6,0,24.3),(154.6,0,21.2),(160.7,0,15.2),(166.8,0,9.1),(169.8,0,0),(172.8564,9.1,0),(169.8024,9.1,-9.1),(163.5926,9.1,-15.2),(157.3828,9.1,-21.2),(148.2208,9.1,-24.3),(-104.9558,9.1,-24.3),(-114.2196,9.1,-21.3),(-120.4294,9.1,-15.2),(-124.705,9.1,-9.3),(-126.5374,9.1,0),(-124.705,9.1,9.3),(-120.4294,9.1,15.2),(-114.2196,9.1,21.3),(-104.9558,9.1,24.3),(148.2208,9.1,24.3),(157.3828,9.1,21.2),(163.5926,9.1,15.2),(169.8024,9.1,9.1),(172.8564,9.1,0)])))]),
              Transform(DEF='dad_HE2',rotation=(0,-1,0,1.571),
                children=[
                Shape(DEF='HE2',
                  appearance=Appearance(
                    material=Material(DEF='Rustyred_mat',diffuseColor=(.8,.3,.2),shininess=0.100,specularColor=(.3,.1,.05))),
                  geometry=IndexedFaceSet(coordIndex=[0,1,20,-1,0,20,19,-1,1,2,21,-1,1,21,20,-1,2,3,22,-1,2,22,21,-1,3,4,23,-1,3,23,22,-1,4,5,24,-1,4,24,23,-1,5,6,25,-1,5,25,24,-1,6,7,26,-1,6,26,25,-1,7,8,27,-1,7,27,26,-1,8,9,28,-1,8,28,27,-1,9,10,29,-1,9,29,28,-1,10,11,30,-1,10,30,29,-1,11,12,31,-1,11,31,30,-1,12,13,32,-1,12,32,31,-1,13,14,33,-1,13,33,32,-1,14,15,34,-1,14,34,33,-1,15,16,35,-1,15,35,34,-1,16,17,36,-1,16,36,35,-1,17,18,37,-1,17,37,36,-1,19,20,39,-1,19,39,38,-1,20,21,40,-1,20,40,39,-1,21,22,41,-1,21,41,40,-1,22,23,42,-1,22,42,41,-1,23,24,43,-1,23,43,42,-1,24,25,44,-1,24,44,43,-1,25,26,45,-1,25,45,44,-1,26,27,46,-1,26,46,45,-1,27,28,47,-1,27,47,46,-1,28,29,48,-1,28,48,47,-1,29,30,49,-1,29,49,48,-1,30,31,50,-1,30,50,49,-1,31,32,51,-1,31,51,50,-1,32,33,52,-1,32,52,51,-1,33,34,53,-1,33,53,52,-1,34,35,54,-1,34,54,53,-1,35,36,55,-1,35,55,54,-1,36,37,56,-1,36,56,55,-1,17,16,15,-1,17,15,14,-1,17,14,13,-1,17,13,12,-1,17,12,11,-1,17,11,10,-1,17,10,9,-1,17,9,8,-1,17,8,7,-1,17,7,6,-1,17,6,5,-1,17,5,4,-1,17,4,3,-1,17,3,2,-1,17,2,1,-1,17,1,0,-1],creaseAngle=0.785,solid=False,
                    coord=Coordinate(point=[(0,-19.66,-112.068),(-6.37,-19.66,-110.088),(-10.64,-19.66,-106.062),(-14.84,-19.66,-102.036),(-17.01,-19.66,-96.096),(-17.01,-19.66,68.046),(-14.91,-19.66,74.052),(-10.64,-19.66,78.078),(-6.51,-19.66,80.85),(0,-19.66,82.038),(6.51,-19.66,80.85),(10.64,-19.66,78.078),(14.91,-19.66,74.052),(17.01,-19.66,68.046),(17.01,-19.66,-96.096),(14.84,-19.66,-102.036),(10.64,-19.66,-106.062),(6.37,-19.66,-110.088),(0,-19.66,-112.068),(0,-15,-135.84),(-7.28,-15,-133.44),(-12.16,-15,-128.56),(-16.96,-15,-123.68),(-19.44,-15,-116.48),(-19.44,-15,82.48),(-17.04,-15,89.76),(-12.16,-15,94.64),(-7.44,-15,98),(0,-15,99.44),(7.44,-15,98),(12.16,-15,94.64),(17.04,-15,89.76),(19.44,-15,82.48),(19.44,-15,-116.48),(16.96,-15,-123.68),(12.16,-15,-128.56),(7.28,-15,-133.44),(0,-15,-135.84),(0,0,-169.8),(-9.1,0,-166.8),(-15.2,0,-160.7),(-21.2,0,-154.6),(-24.3,0,-145.6),(-24.3,0,103.1),(-21.3,0,112.2),(-15.2,0,118.3),(-9.3,0,122.5),(0,0,124.3),(9.3,0,122.5),(15.2,0,118.3),(21.3,0,112.2),(24.3,0,103.1),(24.3,0,-145.6),(21.2,0,-154.6),(15.2,0,-160.7),(9.1,0,-166.8),(0,0,-169.8)])))])])]),
          Transform(DEF='dad_Deck',scale=(1.01,1,1),translation=(0,7,0),
            children=[
            Group(DEF='Deck',
              children=[
              Transform(DEF='dad_IndexedFaceSet1',
                children=[
                Shape(DEF='IndexedFaceSet1',
                  appearance=Appearance(
                    texture=ImageTexture(url=["DeckPlate.jpg","https://savage.nps.edu/Savage/Ships/Supertanker/DeckPlate.jpg"]),
                    material=Material(DEF='Rustyreddeck_mat',diffuseColor=(.8,.3,.2),shininess=0.100,specularColor=(.3,.1,.05))),
                  geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,13,-1,0,13,14,-1,0,14,15,-1,0,15,16,-1,0,16,17,-1,0,17,0,-1],creaseAngle=1.500,texCoordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,0,7,8,-1,0,8,9,-1,0,9,10,-1,0,10,11,-1,0,11,12,-1,0,12,13,-1,0,13,14,-1,0,14,15,-1,0,15,16,-1,0,16,17,-1,0,17,0,-1],
                    coord=Coordinate(point=[(169.8,0,0),(166.8,0,-9.1),(160.7,0,-15.2),(154.6,0,-21.2),(145.6,0,-24.3),(-103.1,0,-24.3),(-112.2,0,-21.3),(-118.3,0,-15.2),(-122.5,0,-9.3),(-124.3,0,0),(-122.5,0,9.3),(-118.3,0,15.2),(-112.2,0,21.3),(-103.1,0,24.3),(145.6,0,24.3),(154.6,0,21.2),(160.7,0,15.2),(166.8,0,9.1)])))]),
              Transform(DEF='dad_cranes',
                children=[
                Group(DEF='cranes',
                  children=[
                  Transform(DEF='dad_stbdcrane',translation=(10,0,20),
                    children=[
                    Group(DEF='Group1',
                      children=[
                      Transform(DEF='dad_Group2',
                        children=[
                        Group(DEF='Group2',
                          children=[
                          Transform(DEF='dad_yellowcylinderpiece',scale=(3,1,3),translation=(0,-1,0),
                            children=[
                            Shape(DEF='yellowcylinderpiece',
                              appearance=Appearance(
                                material=Material(DEF='material3_mat',diffuseColor=(1,.8,.3),shininess=0.100,specularColor=(.2,.2,0))),
                              geometry=Cylinder(height=15.000,radius=0.2))]),
                          Transform(DEF='dad_Reference5',rotation=(0,0,1,-1.571),scale=(2,.7,2),translation=(4,6,0),
                            children=[
                            Shape(USE='yellowcylinderpiece')])])])])]),
                  Transform(DEF='dad_Reference1',translation=(40,0,-15),
                    children=[
                    Shape(USE='yellowcylinderpiece')]),
                  Transform(DEF='dad_Reference2',translation=(40,0,15),
                    children=[
                    Shape(USE='yellowcylinderpiece')]),
                  Transform(DEF='dad_Reference3',translation=(100,0,-15),
                    children=[
                    Shape(USE='yellowcylinderpiece')]),
                  Transform(DEF='dad_Reference4',translation=(100,0,15),
                    children=[
                    Shape(USE='yellowcylinderpiece')]),
                  Transform(DEF='dad_Group1',translation=(10,0,-20),
                    children=[
                    Group(USE='Group1')]),
                  Transform(DEF='dad_Group3',translation=(150,5,0),
                    children=[
                    Group(DEF='Group3',
                      children=[
                      Transform(DEF='dad_Reference6',
                        children=[
                        Shape(USE='yellowcylinderpiece')]),
                      Transform(DEF='dad_Box1',translation=(0,-5,0),
                        children=[
                        Shape(DEF='Box1',
                          geometry=Box(size=(10,5,10)),
                          appearance=Appearance(
                            material=Material(),))])])])])])])]),
          Transform(DEF='dad_superstructure',
            children=[
            Group(DEF='superstructure',
              children=[
              Transform(DEF='dad_SS1',translation=(-86.9,12.1,0),
                children=[
                Shape(DEF='SS1',
                  appearance=Appearance(
                    material=Material(DEF='offwhite_mat',diffuseColor=(.98,.98,.98))),
                  geometry=Box(size=(18.2,24.3,24.3)))]),
              Transform(DEF='dad_bridgewingsupport',translation=(-80.8,12.1,-18.2),
                children=[
                Shape(DEF='bridgewingsupport',
                  appearance=Appearance(
                    material=Material(USE='offwhite_mat')),
                  geometry=Cylinder(bottom=False,height=24.900,radius=0.5,top=False))]),
              Transform(DEF='dad_rightsupport',translation=(-80.8,12.1,18.2),
                children=[
                Shape(USE='bridgewingsupport')]),
              Transform(DEF='dad_SS3',translation=(-89.9,12.1,0),
                children=[
                Shape(DEF='SS3',
                  appearance=Appearance(
                    material=Material(USE='offwhite_mat')),
                  geometry=Box(size=(12.2,24.3,28.3)))]),
              Transform(DEF='dad_smokestackbase',translation=(-109,9.1,0),
                children=[
                Shape(DEF='smokestackbase',
                  appearance=Appearance(
                    material=Material(USE='offwhite_mat')),
                  geometry=Box(size=(12.1,14,20)))]),
              Transform(DEF='dad_SS2',translation=(-85.8,26.4,0),
                children=[
                Group(DEF='SS2',
                  children=[
                  Transform(DEF='dad_Box2',
                    children=[
                    Shape(DEF='Box2',
                      appearance=Appearance(
                        material=Material(USE='offwhite_mat')),
                      geometry=Box(size=(17,4.2,12.1)))]),
                  Transform(DEF='dad_StbdSideWindows',rotation=(0,-1,0,1.571),scale=(.5,.6,.6),translation=(-4.00163,-5,14.3),
                    children=[
                    Group(DEF='bottomwindows',
                      children=[
                      Transform(DEF='dad_Box21',
                        children=[
                        Shape(DEF='Box21',
                          appearance=Appearance(
                            material=Material(DEF='material22_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box22',translation=(0,0,-4),
                        children=[
                        Shape(DEF='Box22',
                          appearance=Appearance(
                            material=Material(DEF='material23_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box23',translation=(0,0,-8),
                        children=[
                        Shape(DEF='Box23',
                          appearance=Appearance(
                            material=Material(DEF='material24_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box24',translation=(0,0,4),
                        children=[
                        Shape(DEF='Box24',
                          appearance=Appearance(
                            material=Material(DEF='material25_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box25',translation=(0,0,8),
                        children=[
                        Shape(DEF='Box25',
                          appearance=Appearance(
                            material=Material(DEF='material26_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))])])]),
                  Transform(DEF='dad_PortSideWindows',rotation=(0,1,0,1.571),scale=(.5,.6,.6),translation=(-4.00163,-5,-14.3),
                    children=[
                    Group(USE='bottomwindows')]),
                  Transform(DEF='dad_bridgewindows',scale=(.5,1.2,1.2),translation=(8.5,.2,0),
                    children=[
                    Group(DEF='bridgewindows',
                      children=[
                      Transform(DEF='dad_Box3',
                        children=[
                        Shape(DEF='Box3',
                          appearance=Appearance(
                            material=Material(DEF='material4_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box4',translation=(0,0,-1),
                        children=[
                        Shape(DEF='Box4',
                          appearance=Appearance(
                            material=Material(DEF='material5_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box5',translation=(0,0,-2),
                        children=[
                        Shape(DEF='Box5',
                          appearance=Appearance(
                            material=Material(DEF='material6_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box6',translation=(0,0,-3),
                        children=[
                        Shape(DEF='Box6',
                          appearance=Appearance(
                            material=Material(DEF='material7_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box7',translation=(0,0,1),
                        children=[
                        Shape(DEF='Box7',
                          appearance=Appearance(
                            material=Material(DEF='material8_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box8',translation=(0,0,2),
                        children=[
                        Shape(DEF='Box8',
                          appearance=Appearance(
                            material=Material(DEF='material9_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box9',translation=(0,0,3),
                        children=[
                        Shape(DEF='Box9',
                          appearance=Appearance(
                            material=Material(DEF='material10_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box10',translation=(0,0,-4),
                        children=[
                        Shape(DEF='Box10',
                          appearance=Appearance(
                            material=Material(DEF='material11_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box11',translation=(0,0,4),
                        children=[
                        Shape(DEF='Box11',
                          appearance=Appearance(
                            material=Material(DEF='material12_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))])])]),
                  Transform(DEF='dad_lowerwindows',scale=(.5,1.2,1.2),translation=(8,-4,0),
                    children=[
                    Group(DEF='lowerwindows',
                      children=[
                      Transform(DEF='dad_Box12',
                        children=[
                        Shape(DEF='Box12',
                          appearance=Appearance(
                            material=Material(DEF='material13_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box13',translation=(0,0,-2),
                        children=[
                        Shape(DEF='Box13',
                          appearance=Appearance(
                            material=Material(DEF='material14_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box14',translation=(0,0,-4),
                        children=[
                        Shape(DEF='Box14',
                          appearance=Appearance(
                            material=Material(DEF='material15_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box15',translation=(0,0,-6),
                        children=[
                        Shape(DEF='Box15',
                          appearance=Appearance(
                            material=Material(DEF='material16_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box16',translation=(0,0,-8),
                        children=[
                        Shape(DEF='Box16',
                          appearance=Appearance(
                            material=Material(DEF='material17_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box17',translation=(0,0,2),
                        children=[
                        Shape(DEF='Box17',
                          appearance=Appearance(
                            material=Material(DEF='material18_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box18',translation=(0,0,4),
                        children=[
                        Shape(DEF='Box18',
                          appearance=Appearance(
                            material=Material(DEF='material19_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box19',translation=(0,0,6),
                        children=[
                        Shape(DEF='Box19',
                          appearance=Appearance(
                            material=Material(DEF='material20_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))]),
                      Transform(DEF='dad_Box20',translation=(0,0,8),
                        children=[
                        Shape(DEF='Box20',
                          appearance=Appearance(
                            material=Material(DEF='material21_mat',diffuseColor=(0,0,.9),emissiveColor=(0,0,.2),specularColor=(0,0,.2),transparency=0.5)),
                          geometry=Box(size=(.5,.8,.8)))])])]),
                  Transform(DEF='dad_bottomwindows',scale=(.5,1.2,1.2),translation=(8,-10,0),
                    children=[
                    Group(USE='bottomwindows')]),
                  Transform(DEF='dad_mastassembly',center=(-86,27,0),
                    children=[
                    Group(DEF='mastassembly',
                      children=[
                      Transform(DEF='dad_leftsidemast',rotation=(1,0,0,.3),
                        children=[
                        Group(DEF='leftsidemast',
                          children=[
                          Transform(DEF='dad_leftfrontleg',rotation=(0,0,1,.6),translation=(2.2,0,-2),
                            children=[
                            Shape(USE='yellowcylinderpiece')]),
                          Transform(DEF='dad_leftrearleg',translation=(-2,-1,-2),
                            children=[
                            Shape(USE='yellowcylinderpiece')])])]),
                      Transform(DEF='dad_rightsidemast',rotation=(1,0,0,-.3),
                        children=[
                        Group(DEF='rightsidemast',
                          children=[
                          Transform(DEF='dad_rightrearleg',translation=(-2,-1,2),
                            children=[
                            Shape(USE='yellowcylinderpiece')]),
                          Transform(DEF='dad_righfrontleg',rotation=(0,0,1,.6),translation=(2.2,0,2),
                            children=[
                            Shape(USE='yellowcylinderpiece')])])]),
                      Transform(DEF='dad_uppermastarea',translation=(-2.2,-3.4,0),
                        children=[
                        Group(DEF='uppermastarea',
                          children=[
                          Transform(DEF='dad_Reference7',rotation=(1,0,0,1.571),scale=(1,.5,1),translation=(0,10,0),
                            children=[
                            Shape(USE='yellowcylinderpiece')]),
                          Transform(DEF='dad_Reference8',scale=(1,.35,1),translation=(-4,12,0),
                            children=[
                            Shape(USE='yellowcylinderpiece')]),
                          Transform(DEF='dad_Reference9',scale=(1,.55,1),translation=(0,9,0),
                            children=[
                            Shape(USE='yellowcylinderpiece')]),
                          Transform(DEF='dad_Reference10',rotation=(1,0,0,1.571),scale=(1,.2,1),translation=(0,13,0),
                            children=[
                            Shape(USE='yellowcylinderpiece')]),
                          Transform(DEF='dad_Reference11',rotation=(.577,.577,-.577,2.095),scale=(1,.5,1),translation=(0,10,0),
                            children=[
                            Shape(USE='yellowcylinderpiece')])])])])])])]),
              Transform(DEF='dad_bridgewings',center=(-75.9,25.8,0),scale=(1,1.03,1),translation=(-5,-.2,0),
                children=[
                Group(DEF='bridgewings',
                  children=[
                  Transform(DEF='dad_IndexedFaceSet2',
                    children=[
                    Shape(DEF='IndexedFaceSet2',
                      appearance=Appearance(
                        material=Material(USE='offwhite_mat')),
                      geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,5,-1,0,5,6,-1,0,6,7,-1,14,15,10,-1,14,10,11,-1,14,11,12,-1,14,12,13,-1,8,9,10,-1,8,10,15,-1,0,1,9,-1,0,9,8,-1,1,2,10,-1,1,10,9,-1,2,3,11,-1,2,11,10,-1,3,4,12,-1,3,12,11,-1,4,5,13,-1,4,13,12,-1,5,6,14,-1,5,14,13,-1,6,7,15,-1,6,15,14,-1,7,0,8,-1,7,8,15,-1],creaseAngle=0.524,solid=False,
                        coord=Coordinate(point=[(-72.8,27.3,-24.3),(-76.4,27.3,-24.3),(-78.9,27.3,-12.1),(-78.9,27.3,12.1),(-76.4,27.3,24.3),(-72.8,27.3,24.3),(-72.8,27.3,12.2),(-72.8,27.3,-12.2),(-72.8,25.3,-24.3),(-76.4,25.3,-24.3),(-78.9,24.3,-12.1),(-78.9,24.3,12.1),(-76.4,25.3,24.3),(-72.8,25.3,24.3),(-72.8,24.3,12.2),(-72.8,24.3,-12.2)])))]),
                  Transform(DEF='dad_antennas',translation=(-76,29,0),
                    children=[
                    Group(DEF='antennas',
                      children=[
                      Transform(DEF='dad_Reference12',translation=(0,0,-10),
                        children=[
                        Shape(DEF='antennanode',
                          appearance=Appearance(
                            material=Material(USE='offwhite_mat')),
                          geometry=Cone(bottomRadius=0.100,height=20.000))]),
                      Transform(DEF='dad_Reference13',scale=(1,.5,1),translation=(0,4,20),
                        children=[
                        Shape(USE='antennanode')]),
                      Transform(DEF='dad_Reference14',scale=(1,.5,1),translation=(0,4,-20),
                        children=[
                        Shape(USE='antennanode')]),
                      Viewpoint(DEF='A_vp',description='look at the masts',orientation=(-.414,.811,.414,1.779),position=(40,70,0)),
                      Transform(DEF='dad_antennanode',translation=(0,0,10),
                        children=[
                        Shape(USE='antennanode')])])]),
                  Transform(DEF='dad_radar',translation=(-77,28,5),
                    children=[
                    Group(DEF='radar',
                      children=[
                      Transform(DEF='dad_radarPost',
                        children=[
                        Shape(DEF='radarPost',
                          appearance=Appearance(
                            material=Material(DEF='material27_mat',diffuseColor=(1,.8,.3),shininess=0.100,specularColor=(.2,.2,0))),
                          geometry=Cylinder(bottom=False,height=5.000,radius=0.2,top=False))]),
                      Transform(DEF='dad_RadarHousing',translation=(0,3,0),
                        children=[
                        Group(DEF='RadarHousing',
                          children=[
                          Transform(DEF='dad_Sphere1',translation=(0,.5,0),
                            children=[
                            Shape(DEF='Sphere1',
                              appearance=Appearance(
                                material=Material(USE='offwhite_mat')),
                              geometry=Sphere(),)]),
                          Transform(DEF='dad_Cylinder1',
                            children=[
                            Shape(DEF='Cylinder1',
                              appearance=Appearance(
                                material=Material(USE='offwhite_mat')),
                              geometry=Cylinder(height=1.200,top=False))])])])])])])]),
              Transform(DEF='dad_smokestack',
                children=[
                Group(DEF='smokestack',
                  children=[
                  Transform(DEF='dad_SweptSurface1',
                    children=[
                    Shape(DEF='SweptSurface1',
                      appearance=Appearance(
                        material=Material(DEF='material28_mat',diffuseColor=(.1,.1,.1),shininess=0.300,specularColor=(.1,.1,.1))),
                      geometry=IndexedFaceSet(coordIndex=[0,1,6,-1,0,6,5,-1,1,2,7,-1,1,7,6,-1,2,3,8,-1,2,8,7,-1,3,4,9,-1,3,9,8,-1,5,6,7,-1,5,7,8,-1,3,2,1,-1,3,1,0,-1],creaseAngle=0.524,
                        coord=Coordinate(point=[(-104.12189,15.87881,-4.88),(-112.87762,16.15243,-4.88),(-112.87762,16.15243,4.88),(-104.12189,15.87881,4.88),(-104.12189,15.87881,-4.88),(-104.59142,31.90911,-3.66),(-111.15821,32.11432,-3.66),(-111.15821,32.11432,3.66),(-104.59142,31.90911,3.66),(-104.59142,31.90911,-3.66)])))]),
                  Transform(DEF='dad_smokestackexhaust',translation=(-107,33,0),
                    children=[
                    Shape(DEF='smokestackexhaust',
                      appearance=Appearance(
                        material=Material(DEF='material29_mat',diffuseColor=(.1,.1,.1),shininess=0.300,specularColor=(.1,.1,.1))),
                      geometry=Cylinder(height=4.000,radius=1.800))])])])])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for OilTanker.py")
