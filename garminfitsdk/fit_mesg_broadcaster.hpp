////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2008 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 1.50Release
// Tag = $Name: AKW1_500 $
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_MESG_BROADCASTER_HPP)
#define FIT_MESG_BROADCASTER_HPP

#include <iosfwd>
#include <vector>
#include "fit_mesg.hpp"
#include "fit_mesg_definition.hpp"
#include "fit_mesg_definition_listener.hpp"
#include "fit_mesg_listener.hpp"
#include "fit_mesg_with_event_broadcaster.hpp"
#include "fit_buffered_record_mesg_broadcaster.hpp"
#include "fit_decode.hpp"
#include "fit_file_id_mesg_listener.hpp"
#include "fit_file_creator_mesg_listener.hpp"
#include "fit_pad_mesg_listener.hpp"
#include "fit_software_mesg_listener.hpp"
#include "fit_capabilities_mesg_listener.hpp"
#include "fit_file_capabilities_mesg_listener.hpp"
#include "fit_mesg_capabilities_mesg_listener.hpp"
#include "fit_field_capabilities_mesg_listener.hpp"
#include "fit_device_settings_mesg_listener.hpp"
#include "fit_user_profile_mesg_listener.hpp"
#include "fit_hrm_profile_mesg_listener.hpp"
#include "fit_sdm_profile_mesg_listener.hpp"
#include "fit_bike_profile_mesg_listener.hpp"
#include "fit_zones_target_mesg_listener.hpp"
#include "fit_sport_mesg_listener.hpp"
#include "fit_hr_zone_mesg_listener.hpp"
#include "fit_power_zone_mesg_listener.hpp"
#include "fit_met_zone_mesg_listener.hpp"
#include "fit_goal_mesg_listener.hpp"
#include "fit_activity_mesg_listener.hpp"
#include "fit_session_mesg_listener.hpp"
#include "fit_lap_mesg_listener.hpp"
#include "fit_record_mesg_listener.hpp"
#include "fit_event_mesg_listener.hpp"
#include "fit_device_info_mesg_listener.hpp"
#include "fit_hrv_mesg_listener.hpp"
#include "fit_course_mesg_listener.hpp"
#include "fit_course_point_mesg_listener.hpp"
#include "fit_workout_mesg_listener.hpp"
#include "fit_workout_step_mesg_listener.hpp"
#include "fit_totals_mesg_listener.hpp"
#include "fit_weight_scale_mesg_listener.hpp"
#include "fit_blood_pressure_mesg_listener.hpp"

namespace fit
{

class MesgBroadcaster : public MesgListener, public MesgDefinitionListener
{
   public:
      MesgBroadcaster(void);
      FIT_BOOL Run(std::istream& file);
      void AddListener(MesgDefinitionListener& mesgDefinitionListener);
      void AddListener(MesgListener& mesgListener);
      void AddListener(MesgWithEventListener& mesgListener);
      void AddListener(BufferedRecordMesgListener& bufferedRecordMesgListener);
      void AddListener(FileIdMesgListener& fileIdMesgListener);
      void AddListener(FileCreatorMesgListener& fileCreatorMesgListener);
      void AddListener(PadMesgListener& padMesgListener);
      void AddListener(SoftwareMesgListener& softwareMesgListener);
      void AddListener(CapabilitiesMesgListener& capabilitiesMesgListener);
      void AddListener(FileCapabilitiesMesgListener& fileCapabilitiesMesgListener);
      void AddListener(MesgCapabilitiesMesgListener& mesgCapabilitiesMesgListener);
      void AddListener(FieldCapabilitiesMesgListener& fieldCapabilitiesMesgListener);
      void AddListener(DeviceSettingsMesgListener& deviceSettingsMesgListener);
      void AddListener(UserProfileMesgListener& userProfileMesgListener);
      void AddListener(HrmProfileMesgListener& hrmProfileMesgListener);
      void AddListener(SdmProfileMesgListener& sdmProfileMesgListener);
      void AddListener(BikeProfileMesgListener& bikeProfileMesgListener);
      void AddListener(ZonesTargetMesgListener& zonesTargetMesgListener);
      void AddListener(SportMesgListener& sportMesgListener);
      void AddListener(HrZoneMesgListener& hrZoneMesgListener);
      void AddListener(PowerZoneMesgListener& powerZoneMesgListener);
      void AddListener(MetZoneMesgListener& metZoneMesgListener);
      void AddListener(GoalMesgListener& goalMesgListener);
      void AddListener(ActivityMesgListener& activityMesgListener);
      void AddListener(SessionMesgListener& sessionMesgListener);
      void AddListener(LapMesgListener& lapMesgListener);
      void AddListener(RecordMesgListener& recordMesgListener);
      void AddListener(EventMesgListener& eventMesgListener);
      void AddListener(DeviceInfoMesgListener& deviceInfoMesgListener);
      void AddListener(HrvMesgListener& hrvMesgListener);
      void AddListener(CourseMesgListener& courseMesgListener);
      void AddListener(CoursePointMesgListener& coursePointMesgListener);
      void AddListener(WorkoutMesgListener& workoutMesgListener);
      void AddListener(WorkoutStepMesgListener& workoutStepMesgListener);
      void AddListener(TotalsMesgListener& totalsMesgListener);
      void AddListener(WeightScaleMesgListener& weightScaleMesgListener);
      void AddListener(BloodPressureMesgListener& bloodPressureMesgListener);
      void OnMesg(Mesg& mesg);
      void OnMesgDefinition(MesgDefinition& mesgDef);

   private:
      MesgWithEventBroadcaster mesgWithEventBroadcaster;
      BufferedRecordMesgBroadcaster bufferedRecordMesgBroadcaster;
      std::vector<MesgDefinitionListener *> mesgDefinitionListeners;
      std::vector<MesgListener *> mesgListeners;
      std::vector<FileIdMesgListener *> fileIdMesgListeners;
      std::vector<FileCreatorMesgListener *> fileCreatorMesgListeners;
      std::vector<PadMesgListener *> padMesgListeners;
      std::vector<SoftwareMesgListener *> softwareMesgListeners;
      std::vector<CapabilitiesMesgListener *> capabilitiesMesgListeners;
      std::vector<FileCapabilitiesMesgListener *> fileCapabilitiesMesgListeners;
      std::vector<MesgCapabilitiesMesgListener *> mesgCapabilitiesMesgListeners;
      std::vector<FieldCapabilitiesMesgListener *> fieldCapabilitiesMesgListeners;
      std::vector<DeviceSettingsMesgListener *> deviceSettingsMesgListeners;
      std::vector<UserProfileMesgListener *> userProfileMesgListeners;
      std::vector<HrmProfileMesgListener *> hrmProfileMesgListeners;
      std::vector<SdmProfileMesgListener *> sdmProfileMesgListeners;
      std::vector<BikeProfileMesgListener *> bikeProfileMesgListeners;
      std::vector<ZonesTargetMesgListener *> zonesTargetMesgListeners;
      std::vector<SportMesgListener *> sportMesgListeners;
      std::vector<HrZoneMesgListener *> hrZoneMesgListeners;
      std::vector<PowerZoneMesgListener *> powerZoneMesgListeners;
      std::vector<MetZoneMesgListener *> metZoneMesgListeners;
      std::vector<GoalMesgListener *> goalMesgListeners;
      std::vector<ActivityMesgListener *> activityMesgListeners;
      std::vector<SessionMesgListener *> sessionMesgListeners;
      std::vector<LapMesgListener *> lapMesgListeners;
      std::vector<RecordMesgListener *> recordMesgListeners;
      std::vector<EventMesgListener *> eventMesgListeners;
      std::vector<DeviceInfoMesgListener *> deviceInfoMesgListeners;
      std::vector<HrvMesgListener *> hrvMesgListeners;
      std::vector<CourseMesgListener *> courseMesgListeners;
      std::vector<CoursePointMesgListener *> coursePointMesgListeners;
      std::vector<WorkoutMesgListener *> workoutMesgListeners;
      std::vector<WorkoutStepMesgListener *> workoutStepMesgListeners;
      std::vector<TotalsMesgListener *> totalsMesgListeners;
      std::vector<WeightScaleMesgListener *> weightScaleMesgListeners;
      std::vector<BloodPressureMesgListener *> bloodPressureMesgListeners;
};

} // namespace fit

#endif // !defined(FIT_MESG_BROADCASTER_HPP)
